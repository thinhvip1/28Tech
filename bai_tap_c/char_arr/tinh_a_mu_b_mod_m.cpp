#include <bits/stdc++.h>
using namespace std;
long long mod(char a[], long long m){
    long long res = 0;
    for(int i = 0; i < strlen(a); i++){
        res = res*10 + a[i] - 48;
        res %= m;
    }
    return res;
}
long long mod_pow(long long a, long long b, long long m){
    long long res = 1;
    while(b!=0){
        if(b&1){
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b = b>>1;
    }
    return res;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        char c[1000]; long long a, b, m;
        cin >> c >> b >> m;
        a = mod(c,m);
        cout << mod_pow(a,b,m) << endl;
    }
}