#include <bits/stdc++.h>
using namespace std;
//phi(n) = n*(1-p)... voi p la uoc nto cua n
long long Euler(long long n){
    long long res = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            res = res - res/i; // res*(1-1/i)
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n!=1) res *= (1-1.0/n);
    return res;
}

int main(){
    long long n; cin >> n;
    cout << Euler(n);
}