#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    long long ans;
    long long n = s.length();
    long long idx = 0;
    while(idx<n){
        char num = s[idx];
        long long count = 0;
        while(s[idx] == num){
            count++;
            idx++;
        }
        ans = max(ans, count);
    }
    cout << ans << endl;
}