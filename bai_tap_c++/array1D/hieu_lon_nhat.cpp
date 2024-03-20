#include <bits/stdc++.h>
using namespace std;
int max(int a, int b){
    return a > b ? a : b;
}
int max_dif(int a[], int n){
    int min_pos = 0, max_val = 0;
    for(int i = 1; i < n; i++){
        max_val = max(max_val,a[i]-a[min_pos]);
        if(a[i]<a[min_pos]) min_pos = i;
    }
    if(max_val) return max_val;
    return -1;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        for(auto &x : a) cin >> x;
        cout << max_dif(a,n) << endl;
    }
}