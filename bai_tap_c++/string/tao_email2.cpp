#include <bits/stdc++.h>
using namespace std;
string lower_str(string s){
    for(int i = 0; i < s.size(); i++)
        s[i] = tolower(s[i]);
    return s;
}
int main(){
    int tc; cin >> tc;
    cin.ignore();
    map<string,int> mp;
    while(tc--){
        string s; 
        getline(cin, s);
        stringstream ss(s);
        vector<string> v;
        string word;
        while(ss >> word){
            word = lower_str(word);
            v.push_back(word);
        }
        string res = v[v.size()-1];
        for(int i = 0; i < v.size()-1; i++)
            res += v[i][0];
        // kiểm tra xem res đã xuất hiện lần nào trong map mp chưa
        if(mp[res]==0) cout << res;
        else cout << res << mp[res]+1;
        cout << "@gmail.com\n";
        mp[res]++;
    }
}