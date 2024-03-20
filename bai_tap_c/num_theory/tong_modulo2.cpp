#include <bits/stdc++.h>
using namespace std;
bool check(int n, long long k){
    long long res = (k-1)*k/2;
    int fre = n/k, mod = n%k;
    res = res*fre + (mod+1)*mod/2;
    return res==k;
}
int main(){
    int tc; cin>> tc;
    while(tc--){
        int n; long long k; cin >> n >> k;
        if(check(n,k)) cout << "1" << endl;
        else cout << "0" << endl;
    }
}