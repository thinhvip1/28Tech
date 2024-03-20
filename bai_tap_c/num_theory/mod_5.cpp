#include <bits/stdc++.h>
using namespace std;
void mod5(string s){
    int r1 = 1, r2, r3, r4;
    int tmp = (s[s.size()-2]-48)*10 + s[s.size()-1]-48;
    if(tmp%4==0)
        r2 = r3 = r4 = 1;
    else if(tmp%4==1){
        r2 = 2; r3 = 3; r4 =4;
    }
    else if(tmp%4==2){
        r2 = 4; r3 = 4; r4 = 1;
    }
    else{
        r2 = 3; r3 = 2; r4 = 4;
    }
    cout << (r1+r2+r3+r4)%5 << endl;
}
int mod5vip(string s){
    int tmp = (s[s.size()-2]-48)*10 + s[s.size()-1]-48;
    if(tmp%4==0) return 4;
    return 0;
}
int main(){
    string s; cin >> s;
    // mod5(s);
    cout << mod5vip(s);
}