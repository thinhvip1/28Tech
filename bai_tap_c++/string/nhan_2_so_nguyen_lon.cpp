#include <bits/stdc++.h>
using namespace std;
string sum(string a, string b){
    while(a.size() < b.size()) a = "0" + a;
    while(b.size() < a.size()) b = "0" + b;
    string res = "";
    int carry = 0;
    for(int i = a.size()-1; i >= 0; i--){
        int sum_cs = (a[i]-48) + (b[i]-48) + carry;
        res = (char)(sum_cs%10+48) + res;
        carry = sum_cs/10;
    }
    if(carry) res = (char)(carry+48) + res;
    return res;
}
void product(string a, string b){
    string res = "";
    for(int i = a.size()-1; i >= 0; i--){
        string tmp = "";
        int carry = 0;
        for(int j = b.size()-1; j >= 0; j--){
            int pro_cs = (a[i]-48)*(b[j]-48) + carry;
            tmp = (char)(pro_cs%10+48) + tmp;
            carry = pro_cs/10;
        }
        if(carry) tmp = (char)(carry+48) + tmp;
        for(int j = 0; j < a.size()-1-i; j++) tmp += "0";
        res = sum(res,tmp);
    }
    //xóa chữ số 0 ở đầu xâu
    if(res[0]=='0'){
        int i = 1;
        while(res[i]=='0'&&i<res.size()-1) i++;
        while(i < res.size()) cout << res[i++];
    }
    else cout << res;
    // return res;
}
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        string a, b;
        getline(cin,a);
        getline(cin,b);
        // cout << product(a,b) << endl; 
        product(a,b);
        cout << endl;    
    }
}