#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long>arr(n-1,0);
    for(long long i = 0;i<n-1; i++){
        cin >>arr[i];
    }
    vector<bool>checker(n+1,false);
    checker[0] = true;
    for(auto num: arr){
        checker[num] = true;
    }
    int ans = 0;
    for(long long i = 0; i<=n; i++){
        if(checker[i]==false){
            ans = i;
        }
    }
    cout << ans <<endl;
}