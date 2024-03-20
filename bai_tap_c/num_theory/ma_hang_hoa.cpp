#include <bits/stdc++.h>
using namespace std;
void VN(string s){
    for(int i = 0; i < s.size();i++){
        if(!(s[i]=='0'&&s[i+1]=='8'&&s[i+2]=='4')){
            cout << s[i];
        }
        else i+=2;
    }    
    cout << endl;
}
void VN1(string s){
    for(int i = 0; i < s.size()-2; i++){
        if(s[i]=='0'&&s[i+1]=='8'&&s[i+2]=='4'){
            s[i] = s[i+1] = s[i+2] = 'x'; i+=2;
        }
    }
    for(int i = 0; i < s.size();i++){
        if(s[i]!='x') cout << s[i];
    }
    cout << endl;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        string s; cin >> s;
        // VN(s);
        VN1(s);
    }
}