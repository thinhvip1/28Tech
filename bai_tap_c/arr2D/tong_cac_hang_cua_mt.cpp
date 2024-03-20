#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n >> m;
    int a[n][m], b[n], sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            sum += a[i][j];
        }
        b[i] = sum; sum = 0;
    }
    for(int x : b) cout << x << endl;
}