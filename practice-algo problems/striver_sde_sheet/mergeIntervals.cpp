#include <bits/stdc++.h> 

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int>>ans;
    sort(intervals.begin(), intervals.end());
    vector<int> temp = intervals[0];
    for(auto it: intervals){
        if(it[0]<=temp[1]){
            temp[1] = max(temp[1], it[1]);
        }
        else{
            ans.push_back(temp);
            temp = it;
        }
        
    }
    ans.push_back(temp);
    return ans;
}
