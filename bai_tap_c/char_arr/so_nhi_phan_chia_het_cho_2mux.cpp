#include <bits/stdc++.h>
using namespace std;
// check xem 11111111111111101010100101 co chia het cho 2^x
bool check(char c[], int x){
    int n = strlen(c);
    for(int i = n-1; i >= n-x; i--){
        if(c[i]=='1') return false;
    }
    return true;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        char c[1001]; int x;
        cin >> c >> x;1
        if(check(c,x)) cout << "YES\n";
        else cout << "NO\n";
    }
}