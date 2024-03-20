#include <bits/stdc++.h>
using namespace std;
bool check(long long n){
    int res = 1;
    for(int i = 2; i <= sqrt(n); i++){
        int cnt = 0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        res *= (cnt+1);
    }
    if(n!=1) res*=2;
    return res&1;
}
bool check_scp(long long n){
    int i = sqrt(n);
    if(1ll*i*i==n) return true;
    return false;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        long long n; cin >> n;
        if(check_scp(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}