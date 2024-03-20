#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    int cnt = 0;
    for(char c : s){
        if(c=='H') cnt++;
        else cnt = 0;
        if(cnt > 1) return false;
    }
    return cnt == 0;
}
void init(string &s, int n){
    s = "";
    for(int i = 0; i < n; i++)
        if(i==0) s += 'H';
        else s += 'A';
}
void next(string &s, int n, bool &ok){
    int i = n-1;
    while(i >= 0 && s[i] == 'H'){
        s[i] = 'A';
        i--;
    }
    if(i == -1) ok = false;
    else s[i] = 'H';
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        bool ok = true;
        string s;
        init(s, n);
        while(ok){
            if(check(s)) cout << s << endl;
            next(s, n, ok);
        }
    }
}