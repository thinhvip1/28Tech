#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;
int fre_le(int a[], int n){
    for(int i = 0; i < n; i++) mp[a[i]]++;
    for(auto it : mp){
        if(it.second&1) return it.first;
    }
}
//su dung phep XOR trong bit : 
// 1 xor 1 = 0 xor 0 = 0
// 1 xor 0 = 0 xor 1 = 1
int solve_by_XOR(int a[], int n){
    int res =a[0];
    for(int i = 1; i < n; i++){
        res ^= a[i]; 
    }
    return res;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        for(auto &x : a) cin >> x;
        // cout << fre_le(a,n) << endl;
        cout << solve_by_XOR(a,n) << endl;
        mp.clear();
    }
}