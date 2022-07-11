#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    if(x == 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    long long y;
    if(n%2 == 0){
        y = modularExponentiation(x,n/2,m);
        y = (y*y)%m;
    }
    else{
        y = x%m;
        y = (y*modularExponentiation(x,n-1,m)%m)%m;
    }
    return(int)((y+m)%m);
}