#include <bits/stdc++.h>
using namespace std;
/* 
input:
2
NguyEN  VAn   MaNH
  nguyeN  THUY  LInh
output:
Nguyen Van, MANH
Nguyen Thuy, LINH
*/

string upper_first_cap(string s){
    for(int i = 0; i < s.size(); i++){
        if(i==0) s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
    }
    return s;
}
string upper_str(string s){
    for(int i = 0; i < s.size(); i++)
        s[i] = toupper(s[i]);
    return s;
}
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<string> v;
        string word;
        while(ss >> word){
            v.push_back(word);
        }
        for(int i = 0; i < v.size(); i++){
            if(i != v.size()-1){
                cout << upper_first_cap(v[i]);
                if(i==v.size()-2) cout << ", ";
                else cout << " ";
            }
            else cout << upper_str(v[i]);
        }
        cout << endl;
    }
}