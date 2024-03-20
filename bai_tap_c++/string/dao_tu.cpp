#include <bits/stdc++.h>
using namespace std;
void solve(string s){
    stringstream ss(s);
    vector<string> v;
    string word;
    while(ss >> word){
        v.push_back(word);
    }
    for(int i = v.size()-1; i >= 0; i--)
        cout << v[i] << " ";
    cout << endl;
}
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        string s; getline(cin, s);
        solve(s);
    }
}