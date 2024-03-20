#include <bits/stdc++.h>
using namespace std;

bool check(int a[], int n, int k, int t){
    multiset<int> ms;
    for(int j = 0; j < k; j++){
        // kiem tra xem trong ms co phan tu a[i] >= a[j]-t
        auto it = ms.lower_bound(a[j]-t);
        if(it != ms.end() && *it <= a[j]+t) return true;
        ms.insert(a[j]);
    }
    for(int j = k; j < n; j++){
        ms.erase(a[j-k]);
        auto it = ms.lower_bound(a[j]-t);
        if(it != ms.end() && *it <= a[j]+t) return true;
        ms.insert(a[j]);
    }
    return false;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, k, t;
        cin >> n >> k >> t;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        if(check(a, n, k, t)) cout << "YES\n";
        else cout << "NO\n";
    }
}