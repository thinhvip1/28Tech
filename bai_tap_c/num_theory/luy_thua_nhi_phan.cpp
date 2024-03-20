#include <bits/stdc++.h>
using namespace std;
long long pow(int x, int n){
    long long res =1, tmp = x;
    while(n){
        if(n&1){
            res *= tmp;
        }
        n/=2;
        tmp*=tmp;
    }
    return res;
}
int main(){
    int x, n; cin >> x >> n;
    cout << pow(x,n) << endl;
    return 0;
}