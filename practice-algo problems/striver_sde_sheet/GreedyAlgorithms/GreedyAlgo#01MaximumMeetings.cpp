#include<bits/stdc++.h>
struct meeting{
    int st;
    int ed;
    int idx;
};
bool comparator(struct meeting m1, struct meeting m2){
    if(m1.ed<m2.ed)return true;
    else if((m1.ed == m2.ed) && (m1.idx < m2.idx)) return true;
    else return false;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    int n = end.size();
    struct meeting arr[n];
    for(int i = 0; i<n; i++){
        arr[i].st = start[i];
        arr[i].ed = end[i];
        arr[i].idx = i+1;
    }
    sort(arr, arr+n, comparator);
    vector<int>ans;
    int limit = arr[0].ed;
    ans.push_back(arr[0].idx);
    for(int i = 1; i<n; i++){
        if(arr[i].st> limit){
            limit = arr[i].ed;
            ans.push_back(arr[i].idx);
        }
    }
    return ans;
}