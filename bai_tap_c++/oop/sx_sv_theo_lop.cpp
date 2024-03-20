#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string ma, hoten, lop, email;
    public:
        SinhVien();
        SinhVien(string, string, string, string);
        ~SinhVien();
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);

        // friend istream& operator >> (istream&, SinhVien*);
        // friend ostream& operator << (ostream&, SinhVien*);
        bool operator < (SinhVien); 
};
SinhVien::SinhVien(){
    this->ma = "";
    this->hoten = "";
    this->lop = "";
    this->email = "";
}
SinhVien::SinhVien(string ma, string hoten, string lop, string email){
    this->ma = ma;
    this->hoten = hoten;
    this->lop = lop;
    this->email = email;
}
SinhVien::~SinhVien(){
}
istream& operator >> (istream& in, SinhVien& x){
    in >> x.ma;
    in.ignore();
    getline(in, x. hoten);
    in >> x.lop >> x.email;
    return in;
}
ostream& operator << (ostream& out, SinhVien x){
    out << x.ma << " " << x.hoten << " " << x.lop << " " << x.email;
    return out;
}
// sx mac dinh theo lop
bool SinhVien::operator < (SinhVien other){
    return this->lop < other.lop;
}
// istream& operator >> (istream& in, SinhVien* x){
//     in >> x->ma;
//     in.ignore();
//     getline(in, x->hoten);
//     in >> x->lop >> x->email;
//     return in;
// }
int main(){
    int n; cin >> n;
    SinhVien* a = new SinhVien[n];
    // SinhVien a[n];
    for(int i = 0; i < n; i++){
        cin >> *(a+i);
        // cin >> a[i];
    }
    sort(a, a+n);
    for(int i = 0; i < n; i++){
        cout << *(a+i) << endl;
        // cout << a[i] << endl;
    }
}