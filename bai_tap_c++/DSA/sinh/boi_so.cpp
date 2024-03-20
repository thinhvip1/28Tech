#include <bits/stdc++.h>
using namespace std;

//kiem tra xem xau s co chia het cho n khong
bool check(string s, int n){
    int r = 0;
    for(int i = 0; i < s.size(); i++){
        r = r*10 + (s[i] - 48) ;
        r = r % n;
    }
    return r == 0;
}
void next(string &s){
    int i = s.size()-1;
    while(i >= 0 && s[i] == '9'){
        s[i] = '0';
        --i;
    }
    if(i == -1) s = '9' + s;
    else s[i] = '9';
}
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s = "9";
        while(!check(s, n)){
            next(s);
        }
        cout << s << endl;
    }
}