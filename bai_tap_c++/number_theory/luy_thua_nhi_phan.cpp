#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const int MOD = (int)(1e9+7);
// tính lũy thừa
ll pow(ll a, ll b){
    ll res = 1;
    for(int i = 0; i < b; i++) res *= a;
    return res;
}
// lũy thừa nhị phân
ll bin_pow(ll a, ll b){
    ll res = 1;
    while(b){
        if(b&1==1) res *= a;
        b>>=1;
        a*=a;
    }
    return res;
}
// đệ quy lũy thừa nhị phân
ll bin_pow1(ll a, ll b){
    if(!b) return 1;
    ll x = bin_pow1(a,b/2);
    if(b&1==1) return x*x*a;
    return x*x;
}
ll bin_pow_mod(ll a, ll b, ll m){
    ll res = 1;
    while(b){
        if(b&1){
            res *= a;
            res %= m;
        }
        b>>=1;
        a*=a;
        a %= m;
    }
    return res;
}
/* ll bin_pow_mod1(ll a, ll b, ll m){
    ll res = 1;
    if(!b) return (res%m);
    ll x = bin_pow_mod1(a,b/2,m);
    if(b&1==1){
        return 
    }
} */
int main(){
    ll a, b, m; cin >> a >> b >> m;
    // cout << pow(a,b) << " " << bin_pow(a,b) << " " << bin_pow1(a,b) << endl;
    cout << bin_pow_mod(a,b,m) << endl;
}