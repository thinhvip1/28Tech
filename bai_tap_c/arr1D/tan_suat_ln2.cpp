#include <bits/stdc++.h>
using namespace std;
int cnt[1000001];
int main(){
    int n; cin >> n;
    int a[n];
    for(auto &x : a){
        cin >> x;
        cnt[x]++;
    }
    int res, max_f = 0;
    for(int i = 0; i < n; i++){
        if(max_f<cnt[a[i]]){
            res = a[i]; max_f = cnt[a[i]];
        }
    }
    cout << res << " " << max_f;
    return 0;
}