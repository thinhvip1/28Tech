#include <bits/stdc++.h>
using namespace std;
// tính tổng 2 số nguyên lớn
string sum(string a, string b){
    string res = "";
    // coi a <= b
    if(a.size() > b.size()) return sum(b,a);
    else{
        while(a.size() != b.size()) a = '0' + a;
        int carry = 0;
        for(int i = a.size()-1; i >= 0; i--){
            int s = a[i] + b[i] - 48*2 + carry; //tổng 2 cs cùng với nhớ
            res = (char)(s%10 + 48) + res; // kết quả
            carry = s/10; // nhớ
        }
        if(carry) res = '1' + res; // nhớ vẫn còn tăng thêm 1 vào trc kqua
        return res;
    }
}
string max_val(string a, string b){
    for(char &x : a)
        if(x == '5') x = '6';
    for(char &x : b)
        if(x == '5') x = '6';
    return sum(a,b);
}
string min_val(string a, string b){
    for(char &x : a)
        if(x == '6') x = '5';
    for(char &x : b)
        if(x == '6') x = '5';
    return sum(a,b);
}
int main(){
    int t; cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        cout << min_val(a, b) << " " << max_val(a, b) << endl;
    }
}