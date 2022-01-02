//optimized solution which is solved after taking some hints. in O(n)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> freq(60);
        for(auto i: time){
            freq[i%60] +=1;
        }
        int res = 0;
        for(int i = 1; i<30; i++){
            res += (freq[i]*freq[60-i]);
        }
        int case0 = (freq[0]*(freq[0]-1))/2;
        int case30 = (freq[30]*(freq[30]-1))/2;
        res = res + case0 + case30;
        return res;
    }
};
