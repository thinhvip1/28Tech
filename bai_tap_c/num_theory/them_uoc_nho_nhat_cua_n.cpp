#include <bits/stdc++.h>
using namespace std;
int prime[1000001];
void Sieve(){
    for(int i = 0; i <= 1000000; i++) prime[i] = i;
    for(int i = 2; i <= 1000; i++){
        if(prime[i]==i)
            for(int j = i*i; j <= 1000000; j+=i)
                prime[j] = i;
    }
}
long long orac(int n, int k){
    long long res = n;
    for(int i = 1; i <= k; i++){
        res += prime[res];
    }
    return res;
}
long long orac1(int n, int k){
    long long res = n;
    if(res&1){
        for(int i = 3; i <= res; i+=2)
            if(res%i==0) res += i;
        return res+2*(k-1);
    }
    return res+2*k;
}
int main(){
    // Sieve();
    int tc; cin >> tc;
    while(tc--){
        int n, k; cin >> n >> k;
        cout << orac1(n,k) << endl;
    }
}