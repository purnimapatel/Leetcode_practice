//codestudio #36
#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
    vector<vector<int>>arr(m+1,vector<int>(n+1,0));
    arr[m][n] = 1;
    
        for(int i = m; i>=0; i--){
            for(int j = n; j>=0; j--){
                if(i==m||j==n){
                    arr[i][j] = 1;
                }
                else {
                    arr[i][j] = arr[i][j+1]+arr[i+1][j];
                }
                
                
            }
        }
    return arr[1][1];
}