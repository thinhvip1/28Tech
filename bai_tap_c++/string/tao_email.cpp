#include <bits/stdc++.h>
using namespace std;
string lower_str(string s){
    for(int i = 0; i < s.size(); i++){
        if(!islower(s[i])) s[i] = s[i] + 32;
        // s[i] = tolower(s[i]); //chuyển các kí tự thành in thường
    }
    return s;
}
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        vector<string> v;
        while(ss >> word){
            word = lower_str(word);
            v.push_back(word);
        }
        string res = "";
        res += v[v.size()-1];
        for(int i = 0; i < v.size()-1; i++){
            res += v[i][0];
        }
        cout << res << "@gmail.com\n";
    }
}