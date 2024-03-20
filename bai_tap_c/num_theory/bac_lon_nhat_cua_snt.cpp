#include <bits/stdc++.h>
using namespace std;
int prime[100001];
// void SieveOfEratosThenes(){
//     for(int i = 0; i < 100001; i++) prime[i] = i;
//     for(int i = 2; i <= sqrt(100000); i++)
//         if(prime[i]==i)
//             for(int j = i*i; j <= 100000; j+=i){
//                 if(prime[j]==j) prime[j] = i;
//             }
// }
int bac(int n, int p){
    int res = 0;
    for(int i = p; i <= (n/p)*p; i+=p){
        int tmp = i;
        while(tmp%p==0){
            res++;
            tmp/=p;
        }
    }
    return res;
}
int legendre(int n, int p){
    int res = 0;
    for(int i = p; i <= n; i*=p)
        res += n/i;
    return res;
}
int main(){
    // SieveOfEratosThenes();
    int tc; cin >> tc;
    while(tc--){
        int n,p; cin >> n >> p;
        cout << legendre(n,p) << endl;
    }
}