#include <bits/stdc++.h>
using namespace std;
//Insert sort
void sort_cs(string &s){
    for(int i = 0; i < s.size(); i++){
        char tmp = s[i], j = i-1;
        while(j >= 0 && tmp > s[j]){
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = tmp;
    }       
}
string solve(string s){
    string res = "";
    for(char x : s){
        if(x == '4') res += "322";
        else if(x == '6') res += "35";
        else if(x == '8') res += "2227";
        else if(x == '9') res += "3327";
        else if(x != '1' && x != '0') res += x;
    }
    // sort_cs(res);
    sort(res.begin(), res.end(), greater<char>());
    return res;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        string s; cin >> s;
        cout << solve(s);
    }
}