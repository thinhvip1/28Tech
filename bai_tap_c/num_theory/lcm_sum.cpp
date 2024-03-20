#include <bits/stdc++.h>
using namespace std;
// int prime[1000001];
// void Sieve_nt(){
//     fill(prime,prime+1000000,1);
//     prime[0] = prime[1] = 0;
//     for(int i = 2; i <= 1000; i++){
//         if(prime[i]) 
//             for(int j = i*i; j <= 1000000; j+=i)
//                 prime[j] = 0;
//     }
// }
//lcm(1,n)+lcm(2,n)+...+lcm(n,n) = (d1*phi(d1)+d2*phi(d2)+...+dn*phi(dn)+1)*n/2
// trong do d1,d2,...,dn la uoc cua n
//phi(d1) la so luong so tu 1 den d1 nguyen to cung nhau voi d1; //phi ham euler
long long euler[1000001];
void Sieve_euler(){
    for(int i = 0; i <= 1000000; i++) euler[i] = i;
    for(int i = 2; i <= 1000000; i++){
        if(euler[i]==i){
            euler[i] = i-1;
            for(int j = 2*i; j <= 1000000; j+=i)
                euler[j] -= euler[j]/i;
        }
    }
}
long long res[1000001];
void solve(){
    for(int i = 1; i <= 1000000; i++){
        for(int j = i; j <= 1000000; j+=i)
            res[j] += 1ll*i*euler[i];
    }
}
int main(){
    Sieve_euler();
    solve();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        cout << (res[n]+1)*n/2 << endl;
    }
}