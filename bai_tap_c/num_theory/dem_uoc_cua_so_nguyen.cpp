#include <bits/stdc++.h>
using namespace std;
int cnt(int n){
    int res = 1;
    for(int i = 2; i <= sqrt(n); i++){
        int cnt = 0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        res = res * (cnt+1);
    }
    if(n!=1) res *= 2;
    return res;
}
long long sum(int n){
    long long res = 1+n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            if(i!=n/i) res += i + n/i;
            else res +=i;
        }
    }
    return res;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        // cout << cnt(n) << endl;
        cout << sum(n) << endl;
    }
}