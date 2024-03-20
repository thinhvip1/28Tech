#include <bits/stdc++.h>
using namespace std;
//dung chuoi
bool check(string s){
    int l = 0, r = s.size()-1;
    while(l<r){
        if(s[l]!=s[r]) return false;
        l++; r--;
    }
    return true;
}
//dung so
bool check1(long long n){
    long long x = 0, tmp = n;
    while(tmp){
        x = x*10 + tmp%10;
        tmp/=10;
    }
    if(n!=x) return false;
    return true;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        string s; cin >> s;
        // long long n; cin >> n;
        if(check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}