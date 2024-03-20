#include <bits/stdc++.h>
using namespace std;
int solve(int a[], int n, int c){
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(a[i]-a[i-1]<=c) ++cnt;
        else cnt = 1;
    }
    return cnt;
}
int main(){
    int n, c; cin >> n >> c;
    int a[n];
    for(auto &x : a) cin >> x;
    cout << solve(a,n,c);
}