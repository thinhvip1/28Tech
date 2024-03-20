#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int cnt[5];
// tìm vị trí của phần tử đầu tiên xuất hiện trong đoan [l,r] của mảng a mà lớn hơn x
int first_pos(int a[], int l, int r, int x){
    int pos = -1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m] > x){
            pos = m;
            r = m-1;
        }
        else  l = m+1;
    }
    return pos;
}
// đếm xem có bn phần tử thuộc mảng y mà lớn hơn x 
int count(int y[], int m, int x){
    if(x==0) return 0;
    if(x==1) return cnt[0];
    ll ans = cnt[0] + cnt[1];
    // int l = first_pos(y,0,m-1,x);
    // if(l != -1)
    //     ans += m-l;
    auto it = upper_bound(y,y+m,x);
    if(it != y+m) ans += (y + m - it);
    if(x==2) ans -= (cnt[3] + cnt[4]);
    else if(x==3) ans += cnt[2];
    return ans;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, m; cin >> n >> m;
        int x[n], y[m];
        for(int &a : x) cin >> a;
        for(int i = 0; i < m; i++){
            cin >> y[i];
            if(y[i] <= 4) cnt[y[i]]++;
        }
        sort(y, y+m);
        ll res = 0;
        for(int &a : x){
            res += count(y,m,a);
        }
        cout << res << endl;
        memset(cnt,0,sizeof(cnt));
    }
}