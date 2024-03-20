#include <bits/stdc++.h>
using namespace std;
#define MOD 1e9+7
const float pi = 3.14;
typedef long long ll;
// vi tri cuoi cung < x 
int last_pos(int a[], int l, int r, int x){
    int pos = -1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m] < x){
            pos = m;
            l = m + 1;
        }
        else r = m - 1;
    }
    return pos;
}
void Merge(int a[], int l, int m, int r){
    vector<int> x(a+l,a+m+1);
    vector<int> y(a+m+1,a+r+1);
    int i = 0, j = 0;
    while(i<x.size() && j<y.size()){
        if(x[i] <= y[j]){
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
    Merge(a,l,m,r);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        MergeSort(a,0,n-1);
        ll ans = 0;
        for(int i = 0; i < n-1; i++){
            // a[i] ==> a[j] < k-a[i]
            int r = last_pos(a, i+1, n-1, k-a[i]);
            if(r!=-1) ans += (r-(i+1)+1);
        }
        cout << ans << endl;
    }
}