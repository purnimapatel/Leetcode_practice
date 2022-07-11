#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int mergeSortedArrays(vector<int>&arr, int start, int mid, int end){
    int count = 0;
    int c = mid+1;
    for(int ct = start; ct<=mid; ct++){
        while(c<=end && arr[ct]>2*arr[c]){
            c++;
        }
        count += (c-mid-1);
    }
    int n1 = mid-start+1;
    int n2 = end -mid;
    int arr1[n1];
    int arr2[n2];
    for(int i = 0; i<n1; i++){
        arr1[i] = arr[start+i];
    }
    for(int i = 0; i<n2; i++){
        arr2[i] = arr[mid + 1+ i];
    }
    int i = 0;
    int j = 0;
    int k = start;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            arr[k++] = arr1[i++];
        }
        else{
            arr[k++] = arr2[j++];
        }
    }
    while(i<n1){
        arr[k++] = arr1[i++];
    }
    while(j<n2){
        arr[k++] = arr2[j++];
    }
    return count;
}
int mergeSort(vector<int>&arr,int start, int end){
    if(start>=end){
        return 0;
    }
    int invCount = 0;
    int mid = start + (end-start)/2;
    invCount+=mergeSort(arr,start,mid);
    invCount+=mergeSort(arr,mid+1,end);
    invCount+=mergeSortedArrays(arr, start, mid, end);
    return invCount;
}
int reversePairs(vector<int> &arr, int n){
	// Write your code here.
     int ans = mergeSort(arr,0,n-1);
    
    return ans;
}