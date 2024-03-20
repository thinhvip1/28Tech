#include <bits/stdc++.h>
using namespace std;
int fib[1001];
int tmp = (int)10e9+7;
void Sieve(){
    fib[0]=0; fib[1]=1;
    for(int i = 2; i < 1001; i++){
        fib[i] = (fib[i-1]%tmp + fib[i-2]%tmp)%tmp;
    }
}
int main(){
    Sieve();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        cout << fib[n] << endl;
    }
}