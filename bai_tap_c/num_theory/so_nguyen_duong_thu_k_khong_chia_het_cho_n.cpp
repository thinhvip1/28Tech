#include <bits/stdc++.h>
using namespace std;
long long solve(int n, int k){
    int fre = k/(n-1);
    int r = k%(n-1);
    if(r==0) return 1ll*fre*n-1;
    return 1ll*fre*n+r;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, k; cin >> n >> k;
        cout << solve(n,k) << endl;
    }
}