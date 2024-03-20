#include <bits/stdc++.h>
using namespace std;
string next_binstr(string s){
    int i = s.size()-1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if(i == -1) return s;
    else s[i] = '1';
    return s;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        string s; cin >> s;
        cout << next_binstr(s) << endl;
    }
}