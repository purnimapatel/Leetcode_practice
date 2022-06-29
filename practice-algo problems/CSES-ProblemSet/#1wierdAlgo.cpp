#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long>arr;
    arr.push_back(n);
    while(n!=1){
        if(n%2==0){
            n = n/2;
            arr.push_back(n);
        }
        else{
            n = n*3+1;
            arr.push_back(n);
        }
    }
    for(auto num: arr){
        cout<< num << " ";
    }
    cout<< endl;
}