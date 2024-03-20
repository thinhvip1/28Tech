#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int max_gcd1(int a[], int n){
    int max_gcd = 1;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++)
            if(max_gcd < gcd(a[i],a[j])) max_gcd = gcd(a[i],a[j]);
    }
    return max_gcd;
}
map<int,int> mp;
void solve(int x){
    for(int i = 1; i <= sqrt(x); i++){
        if(x%i==0){
            mp[i]++;
            if(i!=x/i) mp[x/i]++;
        }
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        // for(int &x : a) cin >> x;
        // cout << max_gcd1(a,n) << endl;
        for(auto &x : a){
            cin >> x;
            solve(x);
        }
        int res = 1;
        for(auto it : mp){
            if(it.second > 1) res = it.first;
        }
        cout << res << endl;
        mp.clear();
    }
}