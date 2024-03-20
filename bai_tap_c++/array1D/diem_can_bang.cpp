#include <bits/stdc++.h>
using namespace std;
const int max_n = 1000001;
int a[max_n];
void solve(int n){
    long long sum_l = 0, sum_r = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i) sum_r += a[i];
    }
    bool flag = false;
    for(int i = 1; i < n-1; i++){
        sum_l += a[i-1];
        sum_r -= a[i];
        if(sum_l == sum_r){
            cout << i << " ";
            flag = true;
        }
    }
    if(!flag) cout << -1;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        solve(n);
        cout << endl;
    }
}