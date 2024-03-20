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
    for(int i = 0; i < n; i++){
        if(cnt[a[i]] == 1) cout << a[i] << " ";
        cnt[a[i]] = 0;
    }
    return 0;
}