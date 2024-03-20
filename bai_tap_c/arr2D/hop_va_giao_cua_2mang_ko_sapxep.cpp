#include <bits/stdc++.h>
using namespace std;
int cnt[1000001];
int min(int a, int b){
    return a > b ? b : a;
}
int max(int a, int b){
    return a < b ? b : a;
}
int main(){
    int n, m; cin >> n >> m;
    int a[n+m];
    int max_val = -1e9-1, min_val = 1e9+1;
    for(int &x : a){
        cin >> x; cnt[x]++;
        max_val = max(x,max_val);
        min_val = min(x,min_val);
    }
    int giao[min(n,m)], hop[n+m], g = 0, h = 0;
    for(int i = min_val; i <= max_val;i++){
        if(cnt[i]==1) hop[h++] = i;
        if(cnt[i] == 2){
            hop[h++] = i;
            giao[g++]=i;
        }
    }
    for(int i = 0; i < g; i++) cout << giao[i] << " ";
    cout << endl;
    for(int i = 0; i < h; i++) cout << hop[i] << " ";
}