#include <bits/stdc++.h>
using namespace std;
const int MOD = (int)(1e9 + 7);
typedef long long ll;
// tính tổ hợp chập k của n (0 <= k,n <= 1000)
// kết quả tính được chia dư cho MOD = 10^9 + 7
int C[1001][1001]; // C[i][j]: tổ hợp chập j của i
void init(){
    for(int i = 0; i <= 1000; i++){
        for(int j = 0; j <= i; j++)
            if(j==0 || j==i) C[i][j] = 1;
            else{
                C[i][j] = C[i-1][j] + C[i-1][j-1];
                C[i][j] %= MOD;
            }
    }
}

// 0 <= k,n <= 1000000
int x, y, d;
// thuật toán euclid mở rộng
void extended(int a, int b){
    if(b==0){
        x = 1; y = 0; d = a;
    }
    else{
        extended(b, a%b);
        int tmp = x;
        x = y;
        y = x - y*(a/b);
    }
}
// tìm nghịch đảo module 
int inverse(int a, int m){
    extended(a,m);
    return (x%m + m) % m;
}
ll powMod(ll a, ll b, ll m){
    ll res = 1;
    a %= m;
    while(b){
        if(b%2==1){
            res *= a;
            res %= m;
        }
        b>>=1;
        a *= a;
        a %= m;
    }
    return res;
}
// chỉ áp dụng khi m là số nguyên tố
ll inverse2(ll a, ll m){
    return powMod(a,m-2,m);
}

ll f[1000001];
void init_gthua(){
    f[0] = 1; // 0! = 1
    for(int i = 1; i < 1000001; i++){
        f[i] = f[i-1] * i;
        f[i] %= MOD;
    }
}
// tinh giai thua cua 1 so xong mod 1e9+7
ll GiaiThua(int n){
    ll res = 1;
    for(int i = 2; i <= n; i++){
        res *= i;
        res %= MOD;
    }
    return res;
}
// nCk
int ToHop(int k, int n){
    int res = GiaiThua(n) / GiaiThua(n-k);
    return res/GiaiThua(k);
}


int main(){
    // init();
    init_gthua();
    int tc; cin >> tc;
    while(tc--){
        int n, k; cin >> n >> k;
        // cout << ToHop(k,n) << endl;
        // cout << C[n][k] << endl;
        ll res = (f[n-k] * f[n])%MOD;
        res = inverse2(res, MOD);
        cout << (f[n]%MOD * res%MOD) % MOD << endl;
    }
}