#include <bits/stdc++.h>
using namespace std;
bool cnt[1000001];
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        for(int &x : a){
            cin >> x;
        }
        int res = -1;
        memset(cnt,false,sizeof(cnt));
        for(int x : a){
            if(cnt[x]){
                res = x; break;
            }
            else cnt[x] = true;
        }
        cout << res << endl;
    }
}