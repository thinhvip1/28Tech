#include <bits/stdc++.h>
using namespace std;

bool check(char c[]){
    int sum = 0;
    for(int i = 0; i < strlen(c); i++){
        int x = c[i] - 48;
        if(x!=2 && x!=3 && x!=5 && x!=7) return false;
        sum += x;
    }
    if(sum%10==0) return true;
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