#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// thuật toán euclid mở rộng
void extended(int a, int b, int &x, int &y, int &g){
    if(b==0){
        x = 1;
        y = 0;
        g = a;
    }
    else{
        extended(b, a%b, x, y, g);
        int tmp = x;
        x = y;
        y = tmp - y * (a/b);
    }
}
// nghịch đảo module
void inverse(int a, int m, int x, int y, int g){
    extended(a,m,x,y,g);
    if(g != 1) cout << "Not exist!";
    else cout << (x%m + m)%m << endl;
}
// a^b % m 
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
//nếu m là số nguyên tố không thì phải sử dụng công thức tính phi hàm euler
void inverse2(int a, int m){
    cout << powMod(a,m-2,m) << endl;
}
int main(){
    int a, m, x, y, gcd;
    cin >> a >> m;
    inverse(a,m,x,y,gcd);
    inverse2(a,m);
}