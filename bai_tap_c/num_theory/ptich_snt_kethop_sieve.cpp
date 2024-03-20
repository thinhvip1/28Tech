#include <bits/stdc++.h>
using namespace std;
int prime[1000000];
void SieveOfEratosThenes(){
    for(int i = 0; i < 1000000; i++) prime[i] = i;
    for(int i = 2; i < 1000; i++){
        if(prime[i]==i){
            for(int j = i*i; j < 1000000; j+=i)  
                if(prime[j]==j) prime[j] = i;
        }
    }
}
void phantich(int n){
    while(n!=1){
        int cnt = 0, tmp = prime[n];
        while(n%tmp==0){
            cnt++;
            n/=tmp;
        }
        cout << tmp << "(" << cnt << ") ";
    }
}
int main(){
    SieveOfEratosThenes();
    int tc;cin >>tc;
    for(int i = 0; i < tc; i++){
        int n; cin >> n; int j,cnt=1;
        cout << "#TC" << i+1 << ": ";
        phantich(n);
        cout << endl;
    }
}