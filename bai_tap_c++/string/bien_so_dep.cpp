#include <bits/stdc++.h>
using namespace std;
/*
case0: dãy tăng chặt 
case1: 5 số bằng nhau
case2: 3 số đầu bằng nhau và 2 số sau bằng nhau
case3: tất cả các số đều bằng 6 và/hoặc 8 
*/
string substr(string s){
    string tmp ="";
    for(int i = 5; i < s.size(); i++){
        if(isdigit(s[i])) tmp = tmp + s[i];
    }
    // c2:
    // tmp = s.substr(5,6);
    // tmp = tmp.erase(3,1);
    return tmp;
}
// day tang chat
bool check1(string s){
    for(int i = 0; i < s.size()-1; i++){
        if(s[i] >= s[i+1]) return false;
    }
    return true;
}
// 5 so bang nhau
bool check2(string s){
    for(int i = 1; i < s.size(); i++){
        if(s[i] != s[0]) return false;
    }
    return true;
}
// 3 so dau bang nhau va 2 so sau bang nhau
bool check3(string s){
    for(int i = 1; i < s.size(); i++){
        if(i < 2 && s[i] != s[0]) return false;
        if(s[s.size()-2] != s[s.size()-1]) return false;
    }
    return true;
}
// tat ca cac so = 6 va/hoac 8
bool check4(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '6' && s[i] != '8') return false;
    }
    return true;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        s = substr(s);
        if(check1(s) || check2(s) || check3(s) || check4(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}