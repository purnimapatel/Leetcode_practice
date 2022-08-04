#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i = 0; i<n-2; i++){
        if(i==0 || (i>0 && arr[i]!=arr[i-1])){
            int target = K-arr[i];
            int l = i+1;
            int h = n-1;
            while(l<h){
                if(arr[l]+arr[h]>target){
                    h--;
                }
                else if(arr[l]+arr[h]<target){
                    l++;
                }
                else{
                    vector<int> triplet = {arr[i], arr[l],arr[h]};
                    ans.push_back(triplet);
                    while(arr[l] == arr[l+1])l++;
                    l++;
                    while(arr[h] == arr[h-1])h--;
                }
            }
        }
    }
    return ans;
}