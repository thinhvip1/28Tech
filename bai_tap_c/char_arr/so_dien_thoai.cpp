#include <bits/stdc++.h>
using namespace std;
bool check(char c[]){
    if(strlen(c)<11) return false;
    for(int i = strlen(c)-11; i >= 0; i--)
        if(c[i]=='8') return true;
    
    return false;
}
bool check1(char c[]){
    int idx = -1;
    for(int i = 0; i < strlen(c); i++){
        if(c[i]=='8'){
            idx = i; break;
        }
    }
    if(idx!=-1 && strlen(c)-1-idx >= 10) return true;
    return false;
}
int main(){
    int tc; cin >> tc;;
    while(tc--){
        int n; cin >> n;
        char c[n];
        cin >> c;
        if(check1(c)) cout << "YES\n";
        else cout << "NO\n";
    }
}