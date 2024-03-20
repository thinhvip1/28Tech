#include <bits/stdc++.h>
using namespace std;
struct thisinh{
    string hoten, ngaysinh;
    float diem1, diem2, diem3;
    thisinh(){
        hoten = "";
        ngaysinh = "";
        diem1 = diem2 = diem3 = 0;
    }
    thisinh(string Hoten, string Ngaysinh, float Diem1, float Diem2, float Diem3){
        hoten = Hoten;
        ngaysinh = Ngaysinh;
        diem1 = Diem1;
        diem2 = Diem2;
        diem3 = Diem3;
    }
    float diemtong(){
        return diem1 + diem2 + diem3;
    }
    friend ostream& operator << (ostream& out, thisinh x){
        out << x.hoten << " " << x.ngaysinh << " ";
        out << fixed << setprecision(1) << x.diemtong() << endl;
        return out;
    }
};
void input(thisinh &x){
    getline(cin, x.hoten);
    getline(cin, x.ngaysinh);
    cin >> x.diem1 >> x.diem2 >> x.diem3;
}
void output(thisinh x){
    cout << x.hoten << " " << x.ngaysinh << " ";
    cout << fixed << setprecision(1) << x.diemtong() << endl;
}
int main(){
    thisinh x;
    input(x);
    cout << x << endl;
}