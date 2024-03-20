#include <bits/stdc++.h>
using namespace std;
int max(int a[], int n){
    int res = a[0], idx;
    for(int i = 1; i<n; i++){
        // res = a[i] > res ? a[i] : res;
        if(res < a[i]){
            res = a[i];
            idx = i;
        }
    }
    return idx;
}
int main(){
    int n, m; cin >> n >> m;
    int a[n][m], row[n] = {0}, col[m] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            row[i] += a[i][j];
            col[j] += a[i][j];
        }
    }
    int imax = max(row,n), jmax = max(col,m);
    for(int i = 0; i < n; i++){
        if(i!=imax)
            for(int j = 0; j < m; j++){
                if(j!=jmax) cout << a[i][j] << " ";
            }
        cout << endl;
    }
}