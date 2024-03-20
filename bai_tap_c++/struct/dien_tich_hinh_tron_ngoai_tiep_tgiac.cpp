#include <bits/stdc++.h>
using namespace std;
#define pi 3.141592653589793238

struct point{
    double x, y;
    friend istream& operator >> (istream& in, point &A){
        in >> A.x >> A.y;
        return in;
    }
};
double distance(point A, point B){
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}
bool check_tg(point A, point B, point C){
    double a = distance(A, B); // a = AB
    double b = distance(B, C); // b = BC
    double c = distance(A, C); // c = AC
    if(a > 0 && b > 0 && c > 0 && a+b > c && b+c > a && a+c > b) return true;
    return false;   
}
double dien_tich(point A, point B, point C){
    double a, b, c, p, S_tg, R;
    a = distance(A, B); // a = AB
    b = distance(B, C); // b = BC
    c = distance(A, C); // c = AC
    p = (a+b+c)/2; // nửa chu vi
    S_tg = sqrt(p * (p-a) * (p-b) * (p-c)); // diện tích tam giác theo công thức heron
    R = (a*b*c) / (4*S_tg); // bán kính đường tròn ngoại tiếp
    return 2*pi*R*R;
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        point A, B, C;
        cin >> A >> B >> C;
        if(check_tg(A, B, C)){
            double S = dien_tich(A, B, C);
            cout << fixed << setprecision(3) << S << endl;
        }
        else cout << "INVALID\n";
    }
    return 0;
}