#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class PhanSo{
    private:
        ll tu, mau;
    public:
        PhanSo();
        PhanSo(ll, ll);
        friend istream& operator >> (istream&, PhanSo&);
        friend ostream& operator << (ostream&, PhanSo);
        void rutgon();
};
PhanSo::PhanSo(){
    this->tu = 0;
    this->mau = 1;
}
PhanSo::PhanSo(ll tu, ll mau){
    this->tu = tu;
    this->mau = mau;
}
istream& operator >> (istream& in, PhanSo& a){
    in >> a.tu >> a.mau;
    return in;
}
ostream& operator << (ostream& out, PhanSo a){
    out << a.tu << "/" << a.mau;
    return out;
}
ll gcd(ll a, ll b){
    if(!b) return a;
    return gcd(b, a%b);
}
void PhanSo::rutgon(){
    ll ucln = gcd(this->tu, this->mau);
    this->tu /= ucln;
    this->mau /= ucln;
}
int main(){
    PhanSo p(1,1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}