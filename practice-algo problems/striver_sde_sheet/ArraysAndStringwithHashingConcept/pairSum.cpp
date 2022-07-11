#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>>ans;
    unordered_map<int,int>mp;
    for(auto num : arr){
        vector<int> temp;
        if(mp.find(s-num)!=mp.end()){
            
            for(int i = 0 ; i<mp[s-num];i++){
                temp.push_back(min(num,s-num));
                temp.push_back(max(num,s-num));
                //sort(temp.begin(), temp.end());
                ans.push_back(temp);
            }
            
        }
            mp[num]++;
    }
    sort(ans.begin(),ans.end());
    return ans;
}