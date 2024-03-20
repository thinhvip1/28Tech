#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string masv, hoten, lop, email;
    public:
        SinhVien();
        SinhVien(string, string, string, string);
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
        string getMasv();
        string nganh(); 
};
SinhVien::SinhVien(){
    this->masv = "";
    this->hoten = "";
    this->lop = "";
    this->email = "";
}
SinhVien::SinhVien(string masv, string hoten, string lop, string email){
    this->masv = masv;
    this->hoten = hoten;
    this->lop = lop;
    this->email = email;
}
istream& operator >> (istream& in, SinhVien &x){
    in >> x.masv;
    in.ignore();
    getline(in, x.hoten);
    in >> x.lop;
    in >> x.email;
    return in;
}
ostream& operator << (ostream& out, SinhVien x){
    out << x.masv << " " << x.hoten << " " << x.lop << " " << x.email << "\n";
    return out;
}
string SinhVien::getMasv(){
    return this->masv;
}
// DCKT - Ke toan    DCCN - Cong nghe thong tin   DCAT - An toan thong tin   DCVT - Vien thong   DCDT - Dien tu
string SinhVien::nganh(){
    if(this->masv.find("DCKT") != string::npos) return "Ke toan";
    if(this->masv.find("DCCN") != string::npos && this->lop.find("E") == string::npos) return "Cong nghe thong tin";
    if(this->masv.find("DCAT") != string::npos && this->lop.find("E") == string::npos) return "An toan thong tin";
    if(this->masv.find("DCVT") != string::npos) return "Vien thong";
    if(this->masv.find("DCDT") != string::npos) return "Dien tu";
    return "";
}
string inhoa(string s){
    for(char &c : s){
        c = toupper(c);
    }
    return s;
}
int main(){
    int n; cin >> n;
    // vector<SinhVien> v(n);
    map<string, vector<SinhVien>> mp;
    for(int i = 0; i < n; i++){
        SinhVien tmp;
        cin >> tmp;
        // v[i].push_back(tmp);
        if(tmp.nganh() != "")
            mp[tmp.nganh()].push_back(tmp);
    }
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin, s);
            cout << "DANH SACH SINH VIEN NGANH " << inhoa(s) << ":\n";
            for(SinhVien it : mp[s]) cout << it << endl;    
    }
}