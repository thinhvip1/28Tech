#include <bits/stdc++.h>
using namespace std;
int prime[101];
void Sieve(){
    fill(prime,prime+100,1);
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= 10; i++){
        if(prime[i]){
            for(int j = i*i; j <= 100; j+=i){
                prime[j] = 0;
            }
        }
    }
}
// int pow(int x, int n){
//     int res = 1;
//     while(n){
//         if(n&1) res *= x;
//         n/=2;
//         x*=x;
//     }
//     return res;
// }
long long cnt(int n){
    long long res = 1;
    for(int i = 2; i <= n; i++){ 
        if(prime[i]){
            int cnt = 0;
            for(int j = i; j <= n; j*=i){
                cnt += n/j;
            }
            res *= (cnt+1);
        }
    }
    return res;
}
int main(){
    Sieve();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        cout << cnt(n) << endl;
    }
}