//My brute force approach showing TLE
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0;
        int n = time.size();
        for(int i = 1; i<n; i++){
            for(int j = 0; j<i; j++){
                if((time[i]+time[j])%60 == 0){
                    count++;
                }
            }
        }
        return count;
    }
};

//driver code
int main(){
    
}