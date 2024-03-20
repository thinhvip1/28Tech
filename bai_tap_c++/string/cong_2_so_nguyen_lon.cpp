#include <bits/stdc++.h>
using namespace std;
string sum(string a, string b){
    while(a.size() < b.size()) a = "0" + a;
    while(b.size() < a.size()) b = "0" + b;
    string res = "";
    int carry = 0;
    for(int i = a.size()-1; i >= 0; i--){
        int sum_cs = (a[i]-48) + (b[i]-48) + carry;
        res = (char)(sum_cs%10 + 48) + res;

        carry = sum_cs/10;
    }
    if(carry) res = (char)(carry+48) + res;
    return res;
}
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        string a, b;
        getline(cin,a);
        getline(cin,b);
        cout << sum(a,b) << endl;
    }
}