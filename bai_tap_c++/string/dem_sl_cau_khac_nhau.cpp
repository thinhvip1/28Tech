#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    cin.ignore();
    string s;
    /* map<string, int> mp;
    for(int i = 0; i < n; i++){
        getline(cin, s);
        mp[s]++;
    }
    cout << mp.size(); */
    
    set<string> se;
    for(int i = 0; i < n; i++){
        getline(cin, s);
        se.insert(s);
    }
    cout << se.size();
}