#include <bits/stdc++.h>
using namespace std;
int powmod(int a, int b){
    int res = 1;
    while(b){
        if(b&1){
            res *= a;
            res %= 10;
        }
        a *= a;
        a %= 10;
        b>>=1;
    }
    return res;
}
int trans(string a){
    int tmp;
    if(a.size()==1) tmp = a[a.size()-1]-48;
    else tmp = (a[a.size()-2]-48)*10 + a[a.size()-1]-48;
    return tmp;
}
void last_digit(string a, string n){
    int x = a[a.size()-1]-48, y = trans(n);
    cout << powmod(x,y) << endl;
}
int main(){
    string a, n; cin >> a >> n;
    last_digit(a,n);
}