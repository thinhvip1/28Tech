#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// số mảng con mà sự chênh lệch giữa ptu lớn nhất và nhỏ nhất không vượt quá k
int solve(ll a[], int n, ll k){
    int l = 0, r;
    ll ans = 0;
    multiset<ll> ms;
    for(r = 0; r < n; r++){
        ms.insert(a[r]);
        int max = *(prev(ms.end())); // hoặc *(ms.rbegin())
        while(max - *ms.begin() > k){ 
            auto it = ms.find(a[l]);
            ms.erase(it);
            l++;
        }
        // max - *ms.begin() <= k
        ans += r-l+1;
    }
    return ans;
}
int main(){
    int n; ll k; cin >> n >> k;
    ll a[n];
    for(ll &x : a) cin >> x;
    cout << solve(a, n, k);
}