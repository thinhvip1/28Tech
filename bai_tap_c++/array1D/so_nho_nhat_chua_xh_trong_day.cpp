#include <bits/stdc++.h>
using namespace std;
bool a[1000002];
void solve_by_arr(int n){
    fill(a,a+1000001,false);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x>0) a[x] = true;
    }
    for(int i = 1; i < 1000002; i++){
        if(!a[i]){
            cout << i << endl; break;
        }
    }
}
void solve_by_map(int n){
    map<int,bool>mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x] = true;
    }
    for(int i = 1; i < 1000002; i++)
        if(!mp[i]){
            cout << i << endl;
            break;
        }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        solve_by_arr(n);
        // solve_by_map(n);
    }
    return 0;
}