#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int n, int s){
    int l = 0, r = 0, res = 0, sum = 0;
    for(; r < n; r++){
        sum += a[r];
        while(sum > s){
            sum -= a[l];
            l++;
        }
        // for(int i = l; i <= r; i++) cout << a[i] << " ";
        // cout << endl;
        res = max(res, r-l+1);
    }
    return res;
}
int main(){
    int n, s; cin >> n >> s;
    int a[n];
    for(int &x : a) cin >> x;
    cout << solve(a, n, s);
}