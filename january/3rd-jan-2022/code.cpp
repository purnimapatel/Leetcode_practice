//intutive solution
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1){                      //do handle the base case
            return 1;
        }
        vector<int>ans(n+1,0);
        for(auto t: trust){
            ans[t[0]]--;
            ans[t[1]]++;
        }
        for(int i = 0; i <= n; i++){
            if(ans[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};