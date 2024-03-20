#include <bits/stdc++.h>
using namespace std;
bool check_fibo[1000];
// int fibo(int n){
//     if(!n) return 0;
//     if(n==1) return 1;
//     return fibo(n-2) + fibo(n-1);
// }
void sieve_fibo(){
    int fibo[16];
    fibo[0] = 0; fibo[1] = 1;
    for(int i = 2; i < 16; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    for(int i = 0; i < 16; i++)
        check_fibo[fibo[i]] = true;
}
map<int,bool> mp;
void sieve_fibo1(){
    int fibo[16];
    for(int i = 0; i < 16; i++){
        if(i==0||i==1) fibo[i] = i;
        else fibo[i] = fibo[i-1] + fibo[i-2];
        mp[fibo[i]] = true;
    }
}
int main(){
    sieve_fibo();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        for(int x : a)
            // if(check_fibo[x]) cout << x << " ";
            if(mp[x]) cout << x << " ";
        cout << endl;
    }
}