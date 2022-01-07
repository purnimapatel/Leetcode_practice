#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int count[1001];
        for(int i = 0; i<1001; i++){
            count[i] = 0;
        }
        for(auto i: trips){
            for(int j = i[1]; j<i[2];j++){
                count[j] +=i[0];
            }
        }
        int Max = 0;
        for(int i = 0; i<1001; i++){
            Max= max(Max,count[i]);
        }
        return Max<=capacity;
    }
};