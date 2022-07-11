#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    unordered_map<int,int>mp;
    for(auto it:arr){
        mp[it]++;
        if(mp[it]==2){
            return it;
        }
    }
}
