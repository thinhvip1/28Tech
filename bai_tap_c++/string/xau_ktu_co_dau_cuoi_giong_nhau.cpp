#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
input:
2
abcda
aaa
output:
6
6*/
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        string s; 
        getline(cin, s);
        map<char,int> mp;
        for(char x : s) mp[x]++;
        ll ans = s.size();
        for(auto it : mp) ans += it.second * (it.second - 1) / 2;
        cout << ans << endl;
    }
}