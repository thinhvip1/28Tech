#include <bits/stdc++.h>
using namespace std;
int check(string s){
    if(s[0]=='0') return -1;
    int cs[10] = {0};
    for(char x : s){
        if(!isdigit(x)) return -1;
        else{
            cs[x-48] = 1;
        }
    }
    for(int x : cs)
        if(!x) return 0;
    return 1;
}
int main(){
    int tc;cin >> tc;
    while(tc--){
        string s;
        cin >> s;
        if(check(s)==1) cout << "YES\n";
        else if(check(s)==0) cout << "NO\n";
        else cout << "INVALID\n";
    }
}