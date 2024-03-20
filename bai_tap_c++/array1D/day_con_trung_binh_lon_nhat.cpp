#include <bits/stdc++.h>
using namespace std;
int max(int a, int b){
    return a > b ? a : b;
}
void solve(int a[], int n, int k){
    int max_sum = 0, idx = 0;
    for(int i = 0; i < k; i++){
        max_sum += a[i];
    }
    for(int i = k; i < n; i++){
        int tmp = max_sum + a[i] - a[i-k];
        if(max_sum<tmp){
            max_sum = tmp;
            idx = i-k+1;
        }
    }
    for(int i = 0; i < k; i++){
        cout << a[i+idx];
        if(i!=k-1) cout << " ";
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        solve(a,n,k);
        cout << endl;
    }
}