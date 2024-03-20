#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n], size = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] <= k) size++;
        }
        int cnt = 0;
        for(int i = 0; i < size; i++){
            if(a[i] <= k) cnt++;
        }
        int res = cnt;
        for(int i = size; i < n; i++){  
            if(a[i-size] <= k) cnt--;
            if(a[i] <= k) cnt++;
            res = max(res,cnt);
        }
        cout << size - res << endl;
    }
    return 0;
}