#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
int cmp(pair<int,int> a, pair<int,int> b){
    return a.fi < b.fi;
}
int main(){
    int n; cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].fi >> v[i].se;
    }
    sort(v.begin(), v.end(), cmp);
    int end_t = v[0].fi + v[0].se;
    for(int i = 1; i < n; i++){
        // if(v[i].fi <= tmp) tmp += v[i].se;
        // else tmp = v[i].fi + v[i].se;
        end_t = max(end_t, v[i].fi) + v[i].se;
    }
    cout << end_t;
}