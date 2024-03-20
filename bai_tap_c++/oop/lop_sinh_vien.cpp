#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string MaSV;
        string HoTen;
        string Lop;
        string Ns;
        float GPA;
    public:
        SinhVien();
        SinhVien(string, string, string, float);
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
        friend void nhap(SinhVien&);
        friend void in(SinhVien);
};
SinhVien::SinhVien(){
    this->MaSV = "";
    this->HoTen = "";
    this->Lop = "";
    this->Ns = "";
    this->GPA = 0;
}
SinhVien::SinhVien(string HoTen, string Lop, string Ns, float GPA){
    this->MaSV = "B20DCCN001";
    this->HoTen = HoTen;
    this->Lop = Lop;
    this->Ns = Ns;
    this->GPA = GPA;
}
istream& operator >> (istream& in, SinhVien& x){
    getline(in, x.HoTen);
    getline(in, x.Lop);
    getline(in, x.Ns);
    in >> x.GPA;
    return in;
}
ostream& operator << (ostream& out, SinhVien x){
    out << x.MaSV << " " << x.HoTen << " " << x.Lop << " " << x.Ns << " " << fixed << setprecision(2) << x.GPA;
}
void chuan_hoa(string& s){
    if(s[1] == '/') s = '0' + s;
    if(s[4] == '/') s.insert(3, "0");
}
void nhap(SinhVien& x){
    x.MaSV = "B20DCCN001";
    getline(cin, x.HoTen);
    getline(cin, x.Lop);
    getline(cin, x.Ns);
    cin >> x.GPA;
}
void in(SinhVien x){
    chuan_hoa(x.Ns);    
    cout << x.MaSV << " " << x.HoTen << " " << x.Lop << " " << x.Ns << " " << fixed << setprecision(2) << x.GPA;
}
#define a() a
int main(){
    SinhVien a(); // SinhVien a
    nhap(a);
    in(a);
    return 0;
}