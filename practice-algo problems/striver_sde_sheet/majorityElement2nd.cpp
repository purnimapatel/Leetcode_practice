#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    unordered_map<int,int>mp;
    int n = arr.size();
    for(auto ele: arr){
        mp[ele]++;
    }
    vector<int>ans;
    for(auto it:mp){
        if(it.second>n/3){
            ans.push_back(it.first);
        }
    }
    return ans;
}