//in O(NlogN)
#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int maxCount = 0;
    int count = 1;
    sort(arr.begin(), arr.end());
    for(int i = 1; i<n; i++){
        if(arr[i] == arr[i-1]+1){
            count++;
        }
        else if(arr[i] == arr[i-1]){
            continue;
        }
        else{
            maxCount = max(maxCount, count);
            count = 1;
        }
    }
    maxCount = max(maxCount, count);
    return maxCount;
}


//in O(N)
#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here
    int ans = 0;
    unordered_map<int,int>mp;
    for(int num : arr){
        mp[num]++;
    }
    for(int i = 0; i<n; i++){
        int num = arr[i];
        if(mp.find(num-1)==mp.end()){
            int count = 1;
            while(mp.count(num+1)){
                count++;
                num++;
            }
            ans = max(ans, count);
        }
    }
    return ans;
}
