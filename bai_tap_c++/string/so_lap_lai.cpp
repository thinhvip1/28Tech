#include <iostream>
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y){
    if(y==0) return x;
    return gcd(y, x%y);
}
void solve(ll a, ll x, ll y){
    ll g = gcd(x,y);
    for(int i = 0; i < g; i++)
        cout << a;
    cout << endl;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        ll a, x, y;
        cin >> a >> x >> y;
        solve(a, x, y);
    }
}