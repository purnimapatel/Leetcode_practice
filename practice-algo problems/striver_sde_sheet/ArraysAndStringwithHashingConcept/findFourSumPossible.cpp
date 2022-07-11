#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    bool flag = 0;
    sort(arr.begin(),arr.end());
    for(int i = 0; i<n-3; i++){
        for(int j = i+1; j<n-2;j++){
            int target2 = target-arr[i]-arr[j];
            int left = j+1;
            int right = n-1;
            while(left<right){
                if(arr[left]+arr[right]==target2){
                    flag = 1;
                    break;
                }
                else if(arr[left]+arr[right] < target2){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
    }
    if(flag == 1){
        return "Yes";
    }
    else{
        return "No";
    }
}
