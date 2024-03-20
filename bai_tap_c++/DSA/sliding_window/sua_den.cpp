#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,b; cin >> n >> k >> b;
    int a[n] = {0};
    for(int i = 0; i < b; i++){
        int x; cin >> x;
        a[x-1] = 1;
    }
    int cnt = 0;
    for(int i = 0; i < k; i++){
        if(!a[i]) cnt++;
    }
    int res = cnt;
    for(int i = k; i < n; i++){
        if(a[i-k]) cnt--;
        if(!a[i]) cnt++;
        if(res < cnt) res = cnt;
    }
    cout << k - res;
    return 0;
}