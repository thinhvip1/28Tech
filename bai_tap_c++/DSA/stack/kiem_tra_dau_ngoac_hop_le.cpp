#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<char> st;
    string s; cin >> s;
    bool ok = true;
    for(char c : s){
        if(c == '(') st.push(c);
        else if(st.empty()){
            cout << "Invalid!";
            ok = false; break;
        }
        else st.pop();
    }
    if(ok){
        if(st.empty()) cout << "Valid";
        else cout << "Invalid";
    }

}