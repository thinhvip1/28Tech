#include <bits/stdc++.h>
using namespace std;
int ntln(int n){
    int res;
    for(int i = 2; i <= sqrt(n); i++){
        while(n%i==0){
            res = i;
            n/=i;
        }
    }
    if(n!=1) res = n;
    return res;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        cout << ntln(n) << endl;
    }
}