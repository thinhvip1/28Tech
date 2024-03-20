#include <bits/stdc++.h>
using namespace std;
int pow(int x, int y){
    if(y==0) return 1;
    int tmp = pow(x,y/2);
    if(y&1) return tmp*tmp*x;
    return tmp*tmp;
}
int last_digit(int a, int b){
    int r = a%10;
    if(b<4) return pow(r,b)%10;
    if(r==0||r==1||r==5||r==6) return r;
    if(r==4||r==9){
        if(b&1) return r;
        else return (r*r)%10;
    }
    if(r==2||r==3||r==7||r==8){
        int tmp = b%4;
        return pow(r,tmp+4)%10;
    }
}
int powmod(int a, int b){
    int res = 1;
    while(b){
        if(b&1){
            res *= a;
            res %= 10;
        }
        b>>=1;
        a *= a;
        a %= 10;
    }
    return res;
}
int main(){
    int a, b; cin >> a >> b;
    // cout << last_digit(a,b) << endl;
    cout << powmod(a,b);
}