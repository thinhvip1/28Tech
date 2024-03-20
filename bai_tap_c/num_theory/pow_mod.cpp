#include <bits/stdc++.h>
using namespace std;
long long pow_mod(int x, int y, int p){
    long long res = 1;
    while(y){
        if(y&1){
            res *= x;
            res %= p;
        }
        y/=2;
        x *= x;
        x %= p;
    }
    return res;
}
// long long pow(int x, int y){
//     if(y==0) return 1;
//     long long tmp = pow(x,y/2);
//     if(y&1) return tmp*tmp*x;
//     else return tmp*tmp;
// }
long long pow_mod1(int x, int y, int p){
    if(y==0) return 1;
    long long tmp = pow_mod1(x,y/2,p);
    if(y&1) return ((x%p) * ((tmp%p) * (tmp%p)) %p) %p;
    else return (tmp%p)*(tmp%p)%p;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int x, y, p;
        cin >> x >> y >> p;
        cout << pow_mod1(x,y,p) << endl;
    }
}