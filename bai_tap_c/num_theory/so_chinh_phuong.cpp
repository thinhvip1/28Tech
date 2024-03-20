#include <bits/stdc++.h>
using namespace std;

bool scp(long long n){
    int tmp = sqrt(n)+0.5; //se co sqrt(10^x) = a.999999...
    if(1ll*tmp*tmp == n) return true;
    return false;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int a, b; cin >> a >> b;
        int c1 = sqrt(a), c2 = sqrt(b);
        if(c1*c1 < a) ++c1;
        for(int i = c1; i <= c2; i++){
            cout << i*i << " ";
        }
        cout << endl;
    }
}