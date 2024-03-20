#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(auto &x : a) cin >> x;
    int b[n];
    for(int i = 0; i < n; i++){
        if(i==0) b[i] = a[i];
        else b[i] = b[i-1] + a[i];
    }
    int q; cin >> q;
    while(q--){
        int l,r; cin >> l >> r;
        --l; --r;
        if(l==0) cout << b[r] << endl;
        else cout << b[r] - b[l-1] << endl; 
    }
    
}