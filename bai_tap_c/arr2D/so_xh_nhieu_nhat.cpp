#include <bits/stdc++.h>

using namespace std;
int min(int a, int b){
    return a > b ? b : a;
}
int max(int a, int b){
    return a > b ? a : b;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n], cnt[30001] = {0};
        int max_f = 0;
        memset(cnt,0,sizeof(cnt));
        for(int &x : a){
            cin >> x;
            cnt[x]++;
            if(max_f < cnt[x]) max_f = cnt[x];
        }
        for(int x : a)
            if(cnt[x] == max_f){
                cout << x << " ";
                cnt[x] = 0;
            }
        cout << endl;
    }
    return 0;
}