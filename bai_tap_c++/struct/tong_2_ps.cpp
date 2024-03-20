#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(!b) return a;
    return gcd(b, a%b);
}
struct phanso{
    int tu, mau;
    phanso(){
        tu = 0; mau = 1;
    }
    phanso(int a, int b){
        tu = a; mau = b;
    }
    phanso operator + (const phanso other){
        phanso sum;
        sum.tu = tu*other.mau + other.tu * mau;
        sum.mau = mau * other.mau;
        return sum;
    }
    friend istream& operator >> (istream& in, phanso &x){
        in >> x.tu >> x.mau;
        return in;
    }
    friend ostream& operator << (ostream& out, phanso x){
        int ucln = gcd(x.tu, x.mau);
        out << x.tu/ucln << "/" << x.mau/ucln;
        return out;
    }
};
int main(){
    phanso p, q;
    cin >> p >> q;
    p = p + q;
    cout << p;
}