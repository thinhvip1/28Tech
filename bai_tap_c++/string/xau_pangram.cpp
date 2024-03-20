#include <bits/stdc++.h>
using namespace std;
/*
TC1: input:
thequickbrownfoxjumpsoverthelazydog
output:
YES
TC2: input:
abcdefghijklmnopzzutvlt
output:
NO
*/

int main(){
    string s;
    getline(cin, s);

    // dùng mảng
/*     bool pangr[26] = {false};
    for(int i = 0; i < s.size(); i++) pangr[s[i]-97] = true;
    bool flag = true;
    for(int i = 0; i < 26; i++)
        if(s[i] == false){
            flag = false;
            break;
        }
    if(flag) cout << "YES";
    else cout << "NO"; */

    // dùng set 
    set<char> se;
    for(auto x : s) se.insert(x);
    if(se.size()==26) cout << "YES";
    else cout << "NO";
}