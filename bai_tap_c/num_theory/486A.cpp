#include <bits/stdc++.h>
using namespace std;
long long f(long long n){
    if(n&1) return (-n-1)/2;
    return n/2;
}
int main(){
    long long n; cin >> n;
    cout << f(n) << endl;
}