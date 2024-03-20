#include <bits/stdc++.h>
using namespace std;

// tìm số xâu con sao cho không có quá k phần tử khác nhau
int solve(int a[], int n, int k){
    int l = 0, r, ans = 0;
    int cnt = 0; // dem so luong phan tu khac nhau trong segment
    int dem[10001]; // luu xuat hien cua phan tu 
    memset(dem, 0, sizeof(dem));
    for(r = 0; r < n; r++){
        if(!dem[a[r]]){
            cnt++;
        }
        dem[a[r]]++;
        while(cnt > k){
            dem[a[l]]--;
            if(!dem[a[l]]) cnt--;
            l++;
        }
        // cnt <= k
        ans += r-l+1;
    }
    return ans;
}
int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    cout << solve(a, n , k);
}