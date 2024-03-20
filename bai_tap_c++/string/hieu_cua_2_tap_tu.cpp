#include <bits/stdc++.h>
using namespace std;
set<string> convert(string s){
    set<string> se;
    stringstream ss(s);
    string word;
    while(ss >> word){
        se.insert(word);
    }
    return se;
}
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        set<string> se1 = convert(s1);
        set<string> se2 = convert(s2);
        for(string s : se1){
            if(se2.find(s) == se2.end()) cout << s << " ";
        }
        cout << endl;
    }
}