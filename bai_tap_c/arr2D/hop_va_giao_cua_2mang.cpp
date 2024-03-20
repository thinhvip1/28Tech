#include <bits/stdc++.h>
using namespace std;
int min(int a, int b){
    return a > b ? b : a;
}
int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a){
        cin >> x;
    }
    for(int &x : b) cin >> x;
    int giao[min(n,m)], hop[n+m];
    int i = 0, j = 0, h = 0, g = 0;
    while(i<n && j<m){
        if(a[i]==b[j]){
            giao[g++] = a[i++];
            hop[h++] = b[j++];
        }
        else if(a[i] > b[j]){
            hop[h++] = b[j++];
        }
        else hop[h++] = a[i++];
    }
    while(i<n){
        hop[h++] = a[i++];
    }
    while(j<m){
        hop[h++] = b[j++];
    }
    for(int i = 0; i < g; i++) cout << giao[i] << " ";
    cout << endl;
    for(int i = 0; i < h; i++) cout << hop[i] << " ";
}