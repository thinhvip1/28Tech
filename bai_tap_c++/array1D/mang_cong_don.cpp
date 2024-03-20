#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n], prefix[n+1] = {0};
    for(int &x : a) cin >> x;
    for(int i = 1; i < n+1; i++){
        prefix[i] = prefix[i-1] + a[i-1];
    }
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        cout << prefix[r] - prefix[l-1] << endl;
    }
}