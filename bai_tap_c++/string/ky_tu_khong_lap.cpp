#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin >> tc; // test case
    cin.ignore();
    while(tc--){
        string s;
        getline(cin, s);
        map<char,int> mp;
        for(char x : s) mp[x]++;
        for(char x : s)
            if(mp[x]==1) cout << x;
        cout << endl;
    }
}