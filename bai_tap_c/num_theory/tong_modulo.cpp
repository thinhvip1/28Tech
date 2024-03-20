#include <bits/stdc++.h>
using namespace std;
long long sum_mod(int n, long long k){
    long long res = k*(k-1)/2;
    int fre = n/k, mod = n%k;
    return res*fre + (mod+1)*mod/2;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; long long k; cin >> n >> k;
        cout << sum_mod(n,k) << endl;
    }
}