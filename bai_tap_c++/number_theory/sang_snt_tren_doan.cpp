#include <bits/stdc++.h>
using namespace std;

void sieve(int l, int r){
    bool prime[r-l+1];
    fill(prime, prime + r-l+1, true);
    // if(l==0){
    //     prime[0] = false;
    //     prime[1] = false;
    // }
    // if(l==1) prime[0] = false;
    for(int i = 2; i <= sqrt(r); i++){
        for(int j = max(i*i, (l+i-1)/i*i); j <= r; j+=i)
            prime[j-l] = false;
    }
    for(int i = max(2,l); i <= r; i++)
        if(prime[i-l]) cout << i << " ";
}
int main(){
    int l, r; cin >> l >> r;
    sieve(l,r);
}