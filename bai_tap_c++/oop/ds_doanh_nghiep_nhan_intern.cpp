#include <bits/stdc++.h>
using namespace std;

class DoanhNghiep{
    private:
        string MaDN, Ten;
        int num_SV;
    public:
        DoanhNghiep();
        DoanhNghiep(string, string, int);
        friend istream& operator >> (istream&, DoanhNghiep&);
        friend ostream& operator << (ostream&, DoanhNghiep);
        string getMaDN();
        int getNum_SV();
};
DoanhNghiep::DoanhNghiep(){
    this->MaDN = "";
    this->Ten = "";
    this->num_SV = 0;
}
DoanhNghiep::DoanhNghiep(string MaDN, string Ten, int num_SV){
    this->MaDN = MaDN;
    this->Ten = Ten;
    this->num_SV = num_SV;
}
istream& operator >> (istream& in, DoanhNghiep& x){
    in >> x.MaDN;
    in.ignore();
    getline(in, x.Ten);
    in >> x.num_SV;
    return in;
}
ostream& operator << (ostream& out, DoanhNghiep x){
    out << x.MaDN << " " << x.Ten << " " << x.num_SV;
    return out;
}
string DoanhNghiep::getMaDN(){
    return this->MaDN;
}
int DoanhNghiep::getNum_SV(){
    return this->num_SV;
}
// sap xep doanh nghiep theo so sv nhan vao theo thu tu giam dan va madn theo thu tu tu dien tang dan
bool cmp(DoanhNghiep a, DoanhNghiep b){
    if(a.getNum_SV() != b.getNum_SV()) return a.getNum_SV() > b.getNum_SV();
    return a.getMaDN() < b.getMaDN();
}
//loc ra các doanh nghiệp có số lượng sinh viên nhận vào nằm trong đoạn [a;b]
bool check(DoanhNghiep x, int a, int b){
    if(x.getNum_SV() >= a && x.getNum_SV() <= b) return true;
    return false;
}
int main(){
    int n; cin >> n;
    DoanhNghiep a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    // for(DoanhNghiep x : a) cout << x << endl;
    int q; cin >> q;
    while(q--){
        int i, j;
        cin >> i >> j;
        cout << "Doanh nghiep nhan tu " << i << " den " << j << " sinh vien la:\n";
        for(DoanhNghiep x : a)
            if(check(x, i, j)) cout << x << endl;
    }
}