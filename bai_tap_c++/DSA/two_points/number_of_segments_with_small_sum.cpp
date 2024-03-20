#include <bits/stdc++.h>
using namespace std;

// số dãy con có tổng <= s
int solve(int a[], int n, int s){
    int l = 0, r = 0, cnt = 0, sum = 0;
    for( ; r < n; r++){
        sum += a[r];
        while(sum > s){
            sum -= a[l];
            l++;
        }
        // mỗi lần dịch chuyển r đến phần tử mới, ta có thêm r - l + 1 dãy con mới.
        cnt += r-l+1;
    }
    return cnt;
}
int main(){
    int n, s; cin >> n >> s;
    int a[n];
    for(int &x : a) cin >> x;
    cout << solve(a, n, s);
}