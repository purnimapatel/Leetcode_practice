#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    long ans = 0;
    int left = 0;
    int right = n-1;
    long leftMax = 0;
    long rightMax = 0;
    while(left<right){
        if(arr[left]<arr[right]){
            if(arr[left]>=leftMax){
                leftMax = arr[left];
            }
            else{
                ans+=(leftMax-arr[left]);
            }
            left++;
        }
        else{
            if(arr[right]>=rightMax){
                rightMax = arr[right];
            }
            else{
                ans+=(rightMax-arr[right]);
            }
            right--;
        }
    }
    return ans;
}