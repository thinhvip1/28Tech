#include <bits/stdc++.h>
using namespace std;
long long mod(char c[], long long a){
    long long res = 0, tmp;
    int x;
    for(int i = 0; i < strlen(c); i++){
        x = c[i] - 48;
        tmp = res*10+x;
        res = tmp%a;
    }
    return res;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        char c[1000];
        long long a, modu;
        cin >> c >> a;
        modu = mod(c,a);
        cout << modu << endl;
    }
}