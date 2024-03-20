#include <bits/stdc++.h>
using namespace std;
bool check(int a[], int n, int k){
    set<int> se;
    for(int i = 0; i < k; i++){
        if(se.count(a[i])) return true;
        se.insert(a[i]);
    }
    for(int i = k; i < n; i++){
        se.erase(a[i-k]);
        if(se.count(a[i])) return true;
        se.insert(a[i]);
    }
    return false;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n,k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        if(check(a, n, k)) cout << "YES\n";
        else cout << "NO\n";
    }
}