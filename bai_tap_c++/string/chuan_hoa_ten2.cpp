#include <bits/stdc++.h>
using namespace std;
/*
input:
2
NguyeN VAn   ManH
   NguYEN THUy    LInh
output:
Manh, Nguyen Van
Linh, Nguyen Thuy
*/

// viet hoa chu cai dau con lai viet thuong
string upper_first_c(string s){
    for(int i = 0; i < s.size(); i++){
        // s[i] = (i==0) ? toupper(s[i]) : tolower(s[i]);
        if(i == 0) s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
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
        vector<string> v;
        string word;
        while(ss >> word){
            word = upper_first_c(word);
            v.push_back(word);
        }
        cout << v[v.size()-1] << ", ";
        for(int i = 0; i < v.size()-1; i++){
            cout << v[i];
            if(i != v.size()-2) cout << " ";
        }
        cout << endl;
    }
}