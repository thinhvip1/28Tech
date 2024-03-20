#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool a[10000001];
void solve_by_arr(int n){
    fill(a,a+10000001,false);
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        if(x>-1 && x<10000001) a[x] = true;
    }
    for(int i = 0; i < n; i++){
        if(a[i]) cout << i;
        else cout << "-1";
        if(i!=n-1) cout << " ";
    }
}
void solve_by_map(int n){
    map<ll,bool> mp;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        mp[x] = true;
    }
    for(int i = 0; i < n; i++){
        if(mp[i]) cout << i;
        else cout << "-1";
        if(i!=n-1) cout << " ";
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        // solve_by_arr(n);
        solve_by_map(n);
        cout << endl;
    }
}