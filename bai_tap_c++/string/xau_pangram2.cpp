#include <bits/stdc++.h>
using namespace std;
/*
input:
2
qwqqwqewqwdsafasdasdasdfsdsasas
4
qwqwqqeqqwdsdadsfsdsdsdasasas
24
output:
0
1
*/
int check_pangram(string s, int k){
    if(s.size()<26) return 0;
    set<char> se;
    for(auto x : s) se.insert(x);
    if(26 - se.size() <= k) return 1;
    return 0;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        cin.ignore();
        string s;
        getline(cin, s);
        int k; cin >> k;
        cout << check_pangram(s, k) << endl;
    }
}