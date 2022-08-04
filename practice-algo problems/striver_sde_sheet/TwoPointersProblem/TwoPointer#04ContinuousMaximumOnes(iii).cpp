int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int i = 0;
    int j = 0;
    int count0 = 0;
    int ans = 0;
    while(j<n){
        if(arr[j]==0){
            count0++;
        }
        while(count0>k && i<n){
            if(arr[i]==0){
                count0--;
            }
            i++;
        }
        ans = max(ans,j-i+1);
        j++;
    }
    return ans;
}
