#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

bool p[1000001];
void sieve(){
    for(int i = 0; i < 1000001; i++) p[i] = true;
    p[0] = p[1] = false;
    for(int i = 2; i <= 1000; i++){
        if(p[i])
            for(int j = i*i; j < 1000001; j+=i)
                p[j] = false;
    }
}
int main(){
    sieve();
    int n; cin >> n;
    // if(isPrime(n)) cout << "YES";
    // else cout << "NO";
    // if(p[n]) cout << "YES";
    // else cout << "NO";

    // in ra các snt <= n
    for(int i = 2; i <= n; i++){
        if(p[i]) cout << i << " ";
    }
}