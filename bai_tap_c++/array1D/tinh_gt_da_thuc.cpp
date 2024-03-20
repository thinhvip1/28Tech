#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 10000007
// int pow(int a, int b){
//     int tmp = 1;
//     while(b){
//         if(b&1){
//             tmp *= a;
//             tmp %= MOD;
//         }
//         a *= a;
//         a %= MOD;
//         b >>= 1;
//     }
//     return tmp;
// }
int solve(int a[], int n, int x){
    int sum = 0;
    ll tmp = 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i] * tmp;
        sum %= MOD;
        tmp *= x;
        tmp %= MOD;
    }
    return sum;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, x; cin >> n >> x;
        int a[n];
        cout << solve(a,n,x) << endl;
    }
}