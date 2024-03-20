#include <bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
long long powmod(long long x, int y){
    long long res = 1;
    while(y){
        if(y&1){
            res *= x;
            res %= mod;
        }
        x*=x;
        x%= mod;
        y>>=1;
    }
    return res;
}

int main(){
    int n; cin >> n;
    // (2^n) % (1e9+7)
    cout << powmod(2,n);
}