#include<bits/stdc++.h>
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int ptr1 = n-1;
    int ptr2 = 0;
    while(permutation[ptr1-1]>=permutation[ptr1] && ptr1>0){
        ptr1--;
    }
    if(ptr1==0){
        reverse(permutation.begin(),permutation.end());
        return permutation;
    }
    ptr2 = ptr1-1;
    int val = permutation[ptr2];
    swap(permutation[ptr2], permutation[ptr1]);
    int idx = ptr1;
    while(idx<n){
        if(permutation[ptr2]>=permutation[idx]&& permutation[idx]>val){
            swap(permutation[ptr2], permutation[idx]);  
        }
        idx++;  
    }
    sort(permutation.begin()+ptr1, permutation.end());
        return permutation;
}