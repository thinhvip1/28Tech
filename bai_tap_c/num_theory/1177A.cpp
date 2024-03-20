#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin >> tc;
    while(tc--){
        int a, b; cin >> a >> b;
        int r = a%b;
        if(!r) cout << "0" << endl;
        else cout << b-r << endl;
    }
}