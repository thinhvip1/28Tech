#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n], cnt[10001];
        memset(cnt,0,sizeof(cnt));
        for(int &x : a) cin >> x;
        bool ok = false;
        for(int i = 0; i < n; i++){         
            if(cnt[a[i]]==1){
                cout << a[i] << endl;
                ok = true; break;
            }
            cnt[a[i]] = 1;
        }
        if(!ok) cout << "-1" << endl;
    }
    return 0;
}