#include <bits/stdc++.h>
using namespace std;
// string cut_half(string s){
//     for(int i = 0; i < s.size(); i++){
//         if(s[i]=='0'||s[i]=='8'||s[i]=='9') s[i] = '0';
//         else if(s[i]=='1') s[i] = '1';
//         else{
//             s = "INVALID"; break;
//         }
//     }
//     while(s[0]=='0'){
//         for(int i = 0; i < s.size(); i++){
//             if(i != s.size()-1) s[i] = s[i+1];
//             else s[i] = '\0';
//         }
//     }
//     if(s[0]=='\0') s = "INVALID";
//     // if(s=="") s = "INVALID";
//     return s;
// }
void cut_half1(string s){
    bool ok = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='1') ok = true;
        else if(s[i]!='0'&&s[i]!='8'&&s[i]!='9'){ ok = false; break;}
    }
    if(!ok){cout << "INVALID" << endl; return ;}
    ok = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='1'){ cout << "1"; ok = true;}
        else if(ok) cout << "0";
    }
    cout << endl;
}
// int so_cs(long long n){
//     int cnt = 0;
//     while(n){
//         n/=10;
//         cnt++;
//     }
//     return cnt;
// }
// long long pow(int x, int n){
//     long long res = 1, tmp = x;
//     while(n){
//         if(n&1) res *= tmp;
//         n/=2;
//         tmp *= tmp;
//     }
//     return res;
// }
// long long cut_half2(long long n){
//     long long res = 0; int cnt = so_cs(n);
//     while(cnt--){
//         int r = n%10;
//         if(r==0||r==8||r==9) r = 0;
//         else if(r==1) r = 1;
//         else return 0;
//         res += r*tmp;
//     }
//     return res;
// }
int main(){
    int tc; cin >> tc;
    while(tc--){
        string s; cin >> s;
        cut_half1(s);
        // long long n; cin >> n;
        // if(cut_half1(n)!=0) cout << cut_half2(n) << endl;
        // else cout << "INVALID" << endl;
    }
}