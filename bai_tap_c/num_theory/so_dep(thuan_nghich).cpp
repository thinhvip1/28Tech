#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    int n = s.size();
    int first = s[0]-'0', last = s[n-1] - '0';
    if(!(first==2*last||last==2*first)) return false;
    // for(int i = 1; i < n-1; i++){
    //     if(s[i]!=s[n-1-i]) return false;
    // }
    int l = 1, r = n-2;
    while(l<r){
        if(s[l++]!=s[r--]) return false;
    }
    return true;
}
//dung so
bool check_tn(long long n){
    long long res = 0, tmp = n;
    while(tmp){
        res = res*10 + tmp%10;
        tmp /= 10;
    }
    return res==n;
}
bool solve(long long n){
    int last = n%10; n/=10;
    long long res = 0;
    while(n>=10){
        res = res*10 + n%10;
        n/=10;
    }
    if(!check_tn(res)) return false;
    if(!(n==2*last||last==2*n)) return false;
    return true;
}
int main(){
    int tc; cin >> tc;
    // while(tc--){
    //     string s; cin >> s;
    //     if(check(s)) cout << "YES" << endl;
    //     else cout << "NO" << endl;
    // }
    while(tc--){
        long long n; cin >> n;
        if(solve(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}