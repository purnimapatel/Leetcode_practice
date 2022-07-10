#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    //cout << m <<endl;
    //cout << n << endl;
    vector<int>ans;
    int ptr1 = 0;
    int ptr2 = 0;
    while(ptr1<m && ptr2<n){
        if(arr1[ptr1]<=arr2[ptr2]){
            ans.push_back(arr1[ptr1++]);
        }
        else{
            ans.push_back(arr2[ptr2++]);
        }
    }
    if(ptr1<m){
        while(ptr1<m){
           ans.push_back(arr1[ptr1++]);
        }
    }
    else if(ptr2<n){
        while(ptr2<n){
            ans.push_back(arr2[ptr2]);
            ptr2++;
        }
    }
    return ans;
}