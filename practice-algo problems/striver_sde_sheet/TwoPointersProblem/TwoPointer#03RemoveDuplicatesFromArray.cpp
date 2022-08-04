int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
    int ans = 0;
    if(n>=1){
        ans = 1;
        for(int i = 1; i<n; i++){
            if(arr[i]!=arr[i-1]){
                ans++;
            }
        }
    }
    return ans;
}