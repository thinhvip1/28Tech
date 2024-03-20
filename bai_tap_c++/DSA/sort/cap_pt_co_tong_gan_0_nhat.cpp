#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
typedef long long ll;

int cmp(pair<int,int> a, pair<int,int> b){
    return abs(a.fi) < abs(b.fi);
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n;cin >> n;
        vector<pair<int,int>> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i].fi;
            v[i].se = i;
        }
        sort(v.begin(), v.end(), cmp);
        ll res, sum = INT_MAX;
        int idx;
        for(int i = 1; i < n;i++){
            int tmp = abs(v[i-1].fi + v[i].fi);
            if(tmp < sum){
                sum = tmp;
                res = v[i-1].fi + v[i].fi;
                idx = min(v[i].se, v[i-1].se);
            }
            else if(tmp == sum && idx > min(v[i].se, v[i-1].se)){
                res = v[i-1].fi + v[i].fi;
                idx = min(v[i].se, v[i-1].se);
            }
        }
        cout << res << endl;
    }
}