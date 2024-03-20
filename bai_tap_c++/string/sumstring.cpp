#include <bits/stdc++.h>
using namespace std;
string sum(string a, string b){
    //coi a <= b
    if(a.size() > b.size()) swap(a, b);
    // while(a.size() != b.size()) a = '0' + a;
    a = string(b.size()-a.size(), '0') + a;
    int carry = 0, s;
    string res = "";
    for(int i = b.size()-1; i >= 0; i--){
        s = (a[i] + b[i] - 48*2 + carry);
        res = (char)(s%10 + 48) + res;
        carry = s/10;
    }
    if(carry) res = '1' + res;
    return res;
}
// xau t1 bdau tu l co chieu dai len1, xau t2 bdau tu l+len1 co chieu dai len2
bool check(string s, int l, int len1, int len2){
    string s1 = s.substr(l, len1);
    string s2 = s.substr(l+len1, len2);
    string s3 = sum(s1,s2);
    if(s3.size() > s.size()-len1-len2-l) return false;
    if(s3 == s.substr(l+len1+len2,s3.size())){
        if(s.size() == l + len1 + len2 + s3.size()) return true;
        return check(s,l+len1, len2, s3.size());
    }
    return false;
}
bool solve(string s){
    for(int i = 1; i < s.size(); i++){
        for(int j = 1; j < s.size()-i; j++){
            if(check(s, 0, i, j)) return true;
        }
    }
    return false;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s1;
        cin >> s1;
        if(solve(s1)) cout << "YES\n";
        else cout << "NO\n";
    }    
}