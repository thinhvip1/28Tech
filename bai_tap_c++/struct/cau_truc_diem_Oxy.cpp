#include <bits/stdc++.h>
using namespace std;

struct point{
    double x, y;
    point(){
        x = 0; y = 0;
    }
    point(double hd, double td){
        x = hd; y = td;
    }
    double distance(point B){
        return sqrt(pow(x-B.x,2) + pow(y-B.y,2));
    }
    friend istream& operator >> (istream& in, point &B){
        in >> B.x >> B.y;
        return in;
    }
    friend ostream& operator << (ostream& out, point B){
        out << "(" << B.x << " , " << B.y << ")";
        return out;
    }
};
void input(point &A){
    cin >> A.x >> A.y;
}
double distance(point A, point B){
    return sqrt(pow(A.x-B.x,2) + pow(A.y-B.y,2));
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        point A, B;
        // cin >> A >> B;
        // cout << fixed << setprecision(4) << A.distance(B) << endl;
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
}