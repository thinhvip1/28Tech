#include <bits/stdc++.h>
using namespace std;
bool check(char c[]){
    int l = 0, r = strlen(c) - 1;
    while(l<r){
        if(c[l]&1 || c[l]!=c[r]) return false;
        l++; r--;
    }
    return true;
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