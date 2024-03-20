#include <bits/stdc++.h>
using namespace std;
bool sphenic(int n){
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            cnt++;
            n/=i;
            if(n%i==0){ return false;}
        }
    }
    if(n!=1) cnt++;
    return cnt==3;
}
int prime[100001];
void SieviOfEratosThenes(){
    for(int i = 0; i < 100001; i++) prime[i] = i;
    for(int i = 2; i <= sqrt(100000); i++){
        if(prime[i]==i)
            for(int j = i*i; j <= 100000; j+=i)
                if(prime[j]==j) prime[j] = i;
    }
}
bool sphenic1(int n){
    int cnt = 0;
    while(n!=1){
        int tmp = prime[n];
        n/=prime[n];
        if(prime[n]==tmp) return false;
        cnt++;
    }
    return cnt==3;
}
int main(){
    // SieviOfEratosThenes();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;   
        if(sphenic(n)) cout << "1" << endl;
        else cout << "0" << endl;
    }
}