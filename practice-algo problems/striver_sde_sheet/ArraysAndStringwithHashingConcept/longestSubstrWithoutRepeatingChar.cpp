#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    unordered_map<char,int>mp;
    int left = 0;
    int right = 0;
    int n = input.size();
    int ans = 0;
    while(right<n){
        if(mp.find(input[right])!=mp.end()){
            left = max(mp[input[right]]+1,left);
        }
        mp[input[right]] = right;
        ans = max(ans, right-left+1);
        right++;
    }
    return ans;
}