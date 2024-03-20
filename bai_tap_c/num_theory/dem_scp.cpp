#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin>> tc;
    while(tc--){
        int a, b; cin >> a >> b;
        int c1 = sqrt(a), c2 = sqrt(b);
        if(c1*c1 < a) ++c1;
        cout << c2-c1+1 << endl;
    }
}