#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    sort(arr,arr+n);
//     for(int i = 0; i<n; i++){
//         cout << arr[i] <<" ";
//     }
    //cout << endl;
    //cout <<"target "<<(n)/2 <<endl;
    int idx = 0;
    int i = 0;
    int count = 0;
    while(i<n){
        if(arr[i]==arr[idx]){
            i++;
            count++;
             if(count>=(n/2)+1){
                
                return arr[idx];
            }
        }
        else{ 
                idx = i;
                count = 0;
        }
    }
    
    return -1;
}