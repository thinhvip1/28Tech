#include <bits/stdc++.h>
using namespace std;
// typedef long long ll
using ll = long long;
int max(int a, int b){
    return a > b ? a : b;
}
int min_subarr(ll a[], int n, ll x){
    ll max_num = a[0], sum = a[0];
    for(int i = 1; i < n; i++){
        sum += a[i];
        max_num = max(max_num,a[i]);
    }
    if(sum<=x) return -1;
    int idx[n], size = 0;
    for(int i = 0; i < n; i++)
        if(a[i]==max_num) idx[size++] = i;
    int res = n;
    for(int i = 0; i < size; i++){
        int cnt = 1, tmp = max_num;
        int l = idx[i]-1, r = idx[i]+1;
        while(tmp<=x){
            ++cnt;
            if(l<0 || a[l] <= a[r]){
                tmp += a[r++];
                continue;
            }
            if(r>n-1 || a[l] >= a[r]){
                tmp += a[l--];
                continue;
            }
        }
        if(res > cnt) res = cnt;
    }
    return res;
}
int min_subarr1(ll a[], int n, ll x){
    int l = 0, res = n+1; 
    long long sum = 0;
    for(int r = 0; r < n; r++){
        sum += a[r];
        while(sum>x){
            if(res > r-l+1) res = r-l+1;
            sum -= a[l++];
        }  
    }
    if(res == n+1) return -1;
    return res;
}
int main(){
    int tc;cin >> tc;
    while(tc--){
        int n, x; cin >> n >> x;
        ll a[n]; 
        for(auto &x : a) cin >> x;
        // cout << min_subarr(a,n,x) << endl;
        cout << min_subarr1(a,n,x) << endl;
    }
}