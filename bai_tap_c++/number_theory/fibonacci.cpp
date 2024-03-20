#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fibo[94];
// sử dụng đệ quy
ll fibonacci(ll n){
    if(n<2) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
// sàng 
void sieve(){
    fibo[0] = fibo[1] = 1;
    for(int i = 2; i < 94; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}
int check_fibo(ll n){
    ll f1 = 0, f2 = 1;
    for(int i = 3; i < 94; i++){
        ll fn = f1 + f2;
        if(n==fn) return 1;
        f1 = f2;
        f2 = fn;
    }
    return 0;
}
int main(){
    sieve();
    int tc; cin >> tc;
    while(tc--){
        ll n; cin >> n;
        int flag = false;
        for(int i = 0; i < 94; i++) 
            if(n==fibo[i]){
                flag = true;
                break;
            }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}