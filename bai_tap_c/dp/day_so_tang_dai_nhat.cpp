#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n], lis[n];
    fill(lis,lis+n,1);
    for(auto &x : a) cin >> x;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[i]>a[j] && lis[j]+1>lis[i]) lis[i] = lis[j]+1;
        }
    }
    int res = 0;
    for(auto x : lis) 
        if(res<x) res = x;
    cout << res;
}