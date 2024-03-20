#include <bits/stdc++.h>
using namespace std;
long long mod(char c[], long long a){
    long long res = 0;
    for(int i = 0; i < strlen(c); i++){
        res = res*10+c[i]-48;
        res %= a;   
    }
    return res;
}
long long gcd(long long a, long long b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        char c[1000]; long long b;
        cin >> c >> b;
        long long a = mod(c,b);
        cout << gcd(a,b) << endl;
    }
    return 0;
}