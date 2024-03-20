#include <bits/stdc++.h>
using namespace std;
int cnt[1000001];

int main(){
    int n; cin >> n;
    int a[n];
    for(auto &x : a){
        cin >> x;
        ++cnt[x];
    }
    int max = 0, res;
    for(int i = 0; i < n; i++){
        if(max < cnt[a[i]]){
            res = a[i];
            max = cnt[a[i]];
        }
        else if(max == cnt[a[i]]){
            if(a[i]<res){
                res = a[i];
            }
        }
    }
    cout << res << " " << max;
    return 0;
}