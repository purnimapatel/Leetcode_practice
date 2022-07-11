#include <bits/stdc++.h> 
long long mergeSortedArrays(long long *arr, int start, int mid, int end){
    long long count = 0;
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
            count+= n1-i;
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
long long mergeSort(long long *arr,int start, int end){
    if(start>=end){
        return 0;
    }
    long long invCount = 0;
    int mid = start + (end-start)/2;
    invCount+=mergeSort(arr,start,mid);
    invCount+=mergeSort(arr,mid+1,end);
    invCount+=mergeSortedArrays(arr, start, mid, end);
    return invCount;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long ans = mergeSort(arr,0,n-1);
    
    return ans;
}