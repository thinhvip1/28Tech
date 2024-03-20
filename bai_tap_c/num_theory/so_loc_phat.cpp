#include <bits/stdc++.h>
using namespace std;
bool loc_phat(int n){
    while(n){
        int r = n%10;
        if(r!=0 && r!=6 && r!=8){
            return false;
        }
        n/=10;
    }
    return true;
}
int main(){
    int n; cin >> n;
    if(loc_phat(n)) cout << "1";
    else cout << "0";
}