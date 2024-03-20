#include <bits/stdc++.h>
using namespace std;
int prime[1000001];
void SieveOfEratosThenes(){
    fill(prime,prime+1000000,1);
    // for(int i = 2; i < 1000001; i++) prime[i] = 1;
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= 1000;i++){
        if(prime[i])
            for(int j = i*i; j<= 1000000; j+=i)
                prime[j] = 0;
    }
}
int main(){
    SieveOfEratosThenes();
    int tc; cin >> tc;
    while(tc--){
        long long l,r, cnt = 0; cin >> l >> r;
        int a = sqrt(l);
        if(a*a != l) ++a;
        for(int i = a; i <= sqrt(r); i++){
            if(prime[i]){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}