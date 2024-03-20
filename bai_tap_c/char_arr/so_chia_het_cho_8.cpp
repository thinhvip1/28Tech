#include <bits/stdc++.h>
using namespace std;
bool check(char c[]){
    int n = strlen(c);
    if(n==1){
        if((c[n-1]-48)%8==0) return true;
        else return false; 
    }
    int tmp = (c[n-2]-48)*10 + c[n-1]-48;;
    if(n==2){
        
        if(tmp%8==0) return true;
        else return false;
    }
    tmp += (c[n-3]-48)*100;
    if(tmp%8==0) return true;
    else return false;
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