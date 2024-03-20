#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    int l = 0, r = s.size()-1;
    while(l < r){
        if((s[l]-48)%2==1 || (s[r]-48)%2==1 || s[l]!=s[r]) // '0' = 48, '1'=49
            return false;
        else{
            l++; r--;
        }
    }
    return true;
}
int main(){
    int tc; cin >> tc;
    // cin.ignore();
    while(tc--){
        string s; 
        // getline(cin, s);
        cin >> s;
        if(check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}