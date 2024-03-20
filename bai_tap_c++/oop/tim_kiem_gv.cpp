#include <bits/stdc++.h>
using namespace std;

class GiangVien{
    private:
        string HoTen, BoMon, MaGV;
    public:
        GiangVien();
        GiangVien(string, string, string);
        friend istream& operator >> (istream&, GiangVien&);
        friend ostream& operator << (ostream&, GiangVien);
        string getHoTen();
        void setMaGV(string);
        string getMaGV();
        void setBoMon(string s);
        string getBoMon();
};
GiangVien::GiangVien(){
    this->HoTen = "";
    this->BoMon = "";
    this->MaGV = "";
}
GiangVien::GiangVien(string HoTen, string BoMon, string MaGV){
    this->HoTen = HoTen;
    this->BoMon = BoMon;
    this->MaGV = MaGV;
}
istream& operator >> (istream& in, GiangVien& x){
    getline(in, x.HoTen);
    getline(in, x.BoMon);
    return in;
}
ostream& operator << (ostream& out, GiangVien x){
    out << x.MaGV << " " << x.HoTen << " " << x.BoMon << "\n";
    return out;
}
string GiangVien::getHoTen(){
    return this->HoTen;
}
void GiangVien::setMaGV(string MaGV){
    this->MaGV = MaGV;
}
string GiangVien::getMaGV(){
    return this->MaGV;
}
void GiangVien::setBoMon(string s){
    stringstream ss(s);
    string res = "", token;
    while(ss >> token){
        res += toupper(token[0]);
    }
    this->BoMon = res;
}
string GiangVien::getBoMon(){
    return this->BoMon;
}
string inhoa(string s){
    for(char &c : s) c = toupper(c);
    return s;
}
int main(){
    int n; cin >> n;
    cin.ignore();
    GiangVien a[n];
    for(int i = 0; i < n; i++){
        string s = "GV";
        s += string(2-to_string(i+1).size(), '0') + to_string(i+1);
        a[i].setMaGV(s);
        cin >> a[i];
    }
    // for(GiangVien x : a) cout << x << endl;
    int q; cin >> q;
    while(q--){
        string s;
        cin >> s;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        for(GiangVien x : a){
            if(inhoa(x.getHoTen()).find(inhoa(s)) != string::npos){
                x.setBoMon(x.getBoMon());
                cout << x << endl;
            }
        }
    }
}