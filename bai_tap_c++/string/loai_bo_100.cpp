#include <bits/stdc++.h>
using namespace std;
int drop100(string s){
    int cnt = 0;
    for(int i = 0; i < s.size()-2; i++){
        if(s=="") break;
        if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='0'){
            cnt +=3;
            /* if(i==s.size()-3){
                s = s.substr(0,i);
            }
            else{
                s = s.substr(0,i) + s.substr(i+3);
            } */
            s.erase(i, 3);
            i -= 2;
        }
    }
    return cnt;
}
int main(){
    string s; cin >> s;
    cout << drop100(s);
}