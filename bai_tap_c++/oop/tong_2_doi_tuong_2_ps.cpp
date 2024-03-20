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
        PhanSo operator + (const PhanSo);
        void Rutgon();
};
PhanSo::PhanSo(){
    this->tu = 0;
    this->mau = 1;
}
PhanSo::PhanSo(ll tu, ll mau){
    this->tu = tu;
    this->mau = mau;
}
istream& operator >> (istream& in, PhanSo& x){
    in >> x.tu >> x.mau;
    return in;
}
ostream& operator << (ostream& out, PhanSo x){
    out << x.tu << "/" << x.mau;
    return out;
}
ll gcd(ll a, ll b){
    if(!b) return a;
    return gcd(b, a%b);
}
void PhanSo::Rutgon(){
    ll ucln = gcd(this->tu, this->mau);
    this->tu /= ucln;
    this->mau /= ucln;
}
PhanSo PhanSo::operator + (const PhanSo other){
    PhanSo sum;
    sum.tu = this->tu * other.mau + other.tu * this->mau;
    sum.mau = this->mau * other.mau;
    sum.Rutgon();
    return sum;
}
int main(){
    PhanSo p(1,1), q(1,1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}