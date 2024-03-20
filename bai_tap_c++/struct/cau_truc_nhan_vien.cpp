#include <bits/stdc++.h>
using namespace std;

int cs(int n){
    int cnt = 0;
    while(n){
        n /= 10;
        cnt++;
    }
    return cnt;
}
struct nhanvien{
    int mnv;
    string hoten, gtinh, ns, diachi, mathue, ngay_khd;
};
void std_date(string &s){
    if(s[1] == '/') s = "0" + s;
    if(s[4] == '/') s.insert(s.begin() + 3, '0');
}
void nhap(nhanvien &x){
    getline(cin, x.hoten);
    getline(cin, x.gtinh);
    getline(cin, x.ns);
    getline(cin, x.diachi);
    getline(cin, x.mathue);
    getline(cin, x.ngay_khd);
}
void in(nhanvien x){
    // cout << setfill('0') << setw(5-cs(x.mnv)) << x.mnv << " ";
    string s = to_string(x.mnv);
    s = string(5 - s.size(), '0') + s;
    cout << s << " ";
    std_date(x.ns);
    std_date(x.ngay_khd);
    cout << x.hoten << " " << x.gtinh << " " << x.ns << " " << x.diachi << " " << x.mathue << " " << x.ngay_khd << endl;
}
int main(){
    int n; cin >> n;
    nhanvien ds[n];
    cin.ignore();
    for(int j = 0; j < n; j++){
        ds[j].mnv = j+1;
        nhap(ds[j]);
    }
    for(int j = 0; j < n; j++) in(ds[j]);
    return 0;
}