#include <bits/stdc++.h>
using namespace std;
bool check(char c[]){
    if(c[strlen(c)-1]&1) return false;
    int sum = 0;
    for(int i = 0; i < strlen(c)-1; i++)
        sum += c[i] - 48;
    if(sum%3!=0) return false;
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