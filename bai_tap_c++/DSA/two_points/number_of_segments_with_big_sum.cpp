#include <bits/stdc++.h>
using namespace std;

// số dãy con có tổng >= s
int solve(int a[], int n, int s){
    int l = 0, r = 0, res = 0, sum = 0;
    for( ; r < n; r++){
        sum += a[r];
        while(sum >= s){
            res += n-r;
            sum -= a[l];
            l++;
        }
    }
    return res;
}
int main(){
    int n, s; cin >> n >> s;
    int a[n];
    for(int &x : a) cin >> x;
    cout << solve(a, n, s);
}