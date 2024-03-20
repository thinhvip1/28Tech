#include <bits/stdc++.h>
using namespace std;
long long gcd(long a, long b){
    while(b!=0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
long long lcm(long long a, long long b){
    return a/gcd(a,b) * b;
}
long long solve(long long x, long long y, long long z, long long n){
    long long tmp = lcm(lcm(x,y),z);
    long long m = 1ll * pow(10,n-1);
    long long res = (m +tmp-1)/tmp * tmp;
    if(res<1ll*pow(10,n)) return res;
    return - 1;
}
int main(){
    long long x, y, z, n; cin >> x >> y >> z >> n;
    cout << solve(x,y,z,n);
}