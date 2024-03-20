#include <bits/stdc++.h>
using namespace std;
// int prime[1000001];
// void Sieve(){
//     for(int i = 0; i < 1000001; i++) prime[i] = i;
//     for(int i = 2; i <= 1000; i++){
//         if(prime[i]==i)
//             for(int j = i*i; j <= 1000000; j+=i)
//                 if(prime[j]==j) prime[j] = i;
//     }
// }
// int max(int a, int b){
//     return a > b ? a : b;
// }
// void check(int a, int b){
//     for(int i = max(a,4); i <= b; i++){
//         for(int j = prime[i]; j <= sqrt(i); j++)
//             if(i%j==0 && i%(j*j)==0){
//                 cout << i << " "; break;
//             }
//     }
// }
bool check(int n){
    for(int i = 2; i <= sqrt(n); i++){
        int cnt = 0;
        while(n%i==0){
            cnt++;
            n/=i;
            if(cnt>1) return true;
        }
    }
    return false;
}
int main(){
    // Sieve();
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(check(i)) cout << i << " ";
    }
    return 0;
}