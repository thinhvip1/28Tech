#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// tìm số cặp (i,j) sao cho a[i] = b[j]
int solve(int a[], int b[], int n, int m){
    int i = 0, j = 0;
    ll res = 0;
    while(i < n && j < m){
        if(a[i] < b[j]) i++;
        else if(a[i] > b[j]) j++;
        else{
            int cnt_a = 0, cnt_b = 0;
            while(a[i] == b[j] && i < n){
                i++; cnt_a++;
            }
            while(a[i-1] == b[j] && j < m){
                j++; cnt_b++;
            }
            res += (1ll * cnt_a * cnt_b);
        }
    }
    return res;
}
int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    cout << solve(a, b, n, m);
}