#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int m, int r){
    vector<int> x(a+l, a+m+1);
    vector<int> y(a+m+1, a+r+1);
    int i = 0, j = 0;
    while(i<x.size() && j<y.size()){
        if(x[i]<=y[j]){
            a[l] = x[i];
            l++; i++;
        }
        else{
            a[l] = y[j];
            l++; j++;
        }
    }
    while(i<x.size()){
        a[l] = x[i];
        l++; i++;
    }
    while(j<y.size()){
        a[l] = y[j];
        l++; j++;
    }
}
void MergeSort(int a[], int l, int r){
    if(l>=r) return;
    int m = (l+r)/2;
    MergeSort(a,l,m);
    MergeSort(a,m+1,r);
    merge(a,l,m,r);
}
int solve(int a[], int n, int k){
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(a[i]-a[i-1] <= k) continue;
        else cnt++;
    }
    return cnt;
}
int main(){
    int tc; cin >> tc;
    for(int i = 0; i < tc; i++){
        int n,k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        MergeSort(a,0,n);
        cout << "Case #" << i+1 << ": " << solve(a,n,k) << endl;
    } 
}