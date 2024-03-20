#include <bits/stdc++.h>
using namespace std;
const int MOD = (int)(1e9+7);
typedef long long ll;


// nhân ma trận
void nhanMT(ll a[2][2], ll b[2][2]){
    ll res[2][2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            res[i][j] = 0;
            for(int k = 0; k < 2; k++)
                res[i][j] += a[i][k] * b[k][j] % MOD;
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++)
            a[i][j] = res[i][j];
    }
}

// tính số fibonacci thứ n
ll pow(ll n){
    ll res[2][2] = {{1,0},{0,1}};
    ll a[2][2] = {{1,1},{1,0}};
    while(n){
        if(n%2==1){
            nhanMT(res, a);
        }
        n>>=1;
        nhanMT(a,a);
    }
    return res[0][1];
}

int main(){
    // int a[2][2] = {{1,1},{1,0}}; 
    // nhanMT(a,a);
    int tc; cin >> tc;
    while(tc--){
        ll n; cin >> n;
        cout << pow(n) << endl;
    }
}