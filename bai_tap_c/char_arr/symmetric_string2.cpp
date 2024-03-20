#include <bits/stdc++.h>
using namespace std;
bool symmetry(char c[]){;
    int cnt = 0, l = 0, r=strlen(c)-1;
    while(l<r){
        if(c[l++]!=c[r--]) cnt++;
    }
    if((cnt==1&&strlen(c)%2==0)||(cnt<=1&&strlen(c)%2==1)) return true;
    return false;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        char c[1000];
        cin >> c; //ko bao gom space
        if(symmetry(c)) cout << "YES\n";
        else cout << "NO\n";
    }
    
}