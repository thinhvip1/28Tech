#include <bits/stdc++.h>
using namespace std;

void init(string &s, int n){
    s.assign(n, 'A');
}
void next(string &s, int n, bool &ok){
    int i = n-1;
    while(i >= 0 && s[i] == 'B'){
        s[i] = 'A';
        i--;
    }
    if(i == -1) ok = false;
    else s[i] = 'B';
}
bool check(string s, int n, int k){
    int cnt = 0, res = 0;
    for(char c : s){
        if(c == 'A') cnt++;
        else cnt = 0;
        if(cnt > k) return false;
        if(cnt == k) res++;
    }
    return res == 1;
}
int main(){
    int n, k; cin >> n >> k;
    string s;
    vector<string> v;
    bool ok = true;
    init(s, n);
    while(ok){
        if(check(s, n, k)) v.push_back(s);
        next(s, n, ok);
    }
    cout << v.size() << endl;
    for(string x : v) cout << x << endl;
}