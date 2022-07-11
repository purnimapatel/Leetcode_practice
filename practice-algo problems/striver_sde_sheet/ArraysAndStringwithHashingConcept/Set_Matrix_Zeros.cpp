#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>>matrixCopy(n,vector<int>(m,0));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            matrixCopy[i][j] = matrix[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(matrixCopy[i][j] == 0){
                for(int k = 0; k<m; k++){
                    matrix[i][k] = 0;
                }
                for(int r = 0; r<n; r++){
                    matrix[r][j] = 0;
                }
            }
        }
    }
}