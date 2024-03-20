#include <bits/stdc++.h>
using namespace std;

// int prime[1000000001]; // size of arr "prime" too large
// void SieveOfEratosThenes(){
//     for(int i = 0; i <= 1000000000; i++) prime[i] = i;
//     for(int i = 2; i <= sqrt(1000000000); i++){
//         if(prime[i]==i)
//             for(int j = i*i; j <= 1000000000; j+=i)
//                 if(prime[j]==j) prime[j] = i;
//     }
// }
int cnt(int n){
    int res = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0) res++;
        while(n%i==0){
            n/=i;
        }
    }
    if(n!=1) res++;
    return res;
}
int main(){
    // SieveOfEratosThenes();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        cout << cnt(n) << endl;
    }
}