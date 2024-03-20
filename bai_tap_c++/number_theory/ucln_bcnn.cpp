#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
ll gcd1(ll a, ll b){
    while(b!=0){
        ll r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    ll a, b; cin >> a >> b;
    ll lcm = a/gcd1(a,b) * b;
    cout << gcd1(a,b) << " " << lcm;
}