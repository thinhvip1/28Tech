#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void extended(int a, int b, int &x, int &y, int &g){
    if(b==0){
        x = 1;
        y = 0;
        g = a;
    }
    else{
        extended(b, a%b, x, y, g);
        int tmp = x;
        x = y;
        y = tmp - y * (a/b);
    }
}

int main(){
    int a, b, x, y, g;
    cin >> a >> b;
    extended(a, b, x, y, g);
    cout << x << " " << y << endl;
    cout << "g = " << g;
}