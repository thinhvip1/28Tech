#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    if(!b) return a;
    return gcd(b, a%b);
}
struct phanso{
    ll tu, mau;
    phanso(){
        tu = 0; mau = 1;
    }
    phanso(ll a, ll b){
        tu = a; mau = b;
    }
    friend istream& operator >> (istream& in, phanso &x){
        in >> x.tu >> x.mau;
        return in;
    }
    friend ostream& operator << (ostream& out, phanso x){
        ll ucln = gcd(x.tu, x.mau);
        out << x.tu/ucln << "/" << x.mau/ucln;
        return out;
    }
    friend void nhap(phanso &x){
        cin >> x.tu >> x.mau;
    }
    friend void rutgon(phanso &x){
        ll ucln = gcd(x.tu, x.mau);
        x.tu /= ucln;
        x.mau /= ucln;
    }
    friend void in(phanso x){
        cout << x.tu << "/" << x.mau;
    }
};
int main(){
    phanso x;
    cin >> x;
    cout << x;
    // nhap(x);
    // rutgon(x);
    // in(x);
}