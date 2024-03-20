#include <bits/stdc++.h>
using namespace std;

struct phanso{
    int tu, mau;
    // constructor khong tham so
    phanso(){
        tu = 0;
        mau = 1;
    }
    // constructor co tham so
    phanso(int a, int b){
        tu = a;
        mau = b;
    }
    phanso operator + (const phanso other){
        phanso tong;
        tong.tu = tu * other.mau + other.tu * mau;
        tong.mau = mau * other.mau;
        return tong;
    }
    void in(){
        cout << tu << "/" << mau << endl;
    }
    // insertion >>
    friend istream& operator >> (istream& in, phanso &x){
        in >> x.tu >> x.mau;
        return in;
    }
    // extraction <<
    friend ostream& operator << (ostream& out, phanso x){
        out << x.tu << "/" << x.mau;
        return out;
    }
    bool operator == (const phanso other){
        return tu == other.tu && mau == other.mau;
    }
    // sắp xếp mặc định thay cmp
    bool operator < (const phanso other){
        return tu * other.mau < other.tu * mau;
    }
};
int main(){
/*     phanso ps1(2,3), ps2(1,2);
    phanso kqua = ps1 + ps2;
    // kqua.in();
    cout << ps1 << " + " << ps2 << " = " << kqua << endl;
    cin >> ps1;
    // cout << ps1 << endl;
    if(kqua == ps1) cout << ps1 << " = " << kqua << endl;
    else cout << ps1 << " != " << kqua << endl; */
    int n; cin >> n;
    phanso ds[n];
    for(int i = 0; i < n; i++){
        cin >> ds[i].tu >> ds[i].mau;
    }
    sort(ds, ds + n); // sắp xếp theo operator trong struct
    for(phanso x : ds) cout << x << endl;
}