#include <bits/stdc++.h>
using namespace std;
//so nhi phan gom cac bit 0 va 1
// vd: 111010101, 111111111111, 0000000
bool check(char c[]){
    int sum = 0, tmp = 1, n = strlen(c);
    for(int i = n-1; i >= 0; i--){
        sum += (c[i]-48)*tmp;
        tmp *= 2;
        // chống tràn số
        tmp %=10;
        sum %=10;
    }
    if(sum%5==0) return true;
    return false;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        char c[1000];
        cin >> c;
        if(check(c)) cout << "YES\n";
        else cout << "NO\n";
    }
}