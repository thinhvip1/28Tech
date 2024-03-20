#include <bits/stdc++.h>
using namespace std;
int max(int a[], int n){
    int res = a[0], idx;
    for(int i = 1; i < n; i++){
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
    int imax = max(row,n);
    for(int j = 0; j < m; j++){
        col[j] -= a[imax][j];
    }
    int jmax = max(col,m);
    for(int i = 0; i < n; i++){
        if(i!=imax){
            for(int j = 0; j < m; j++){
                if(j!=jmax) cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    //CACH 2:
    // int a[n][m], row, col, res1 = -1e9, res2 = -1e9;
    // //tim hang co tong lon nhat
    // for(int i = 0; i < n; i++){
    //     int sum = 0;
    //     for(int j = 0; j < m; j++){
    //         cin >> a[i][j];
    //         sum += a[i][j];
    //     }
    //     if(res1 < sum){
    //         res1 = sum; row = i;
    //     }
    // }
    // for(int j = 0; j < m; j++){
    //     int sum = 0;
    //     for(int i = 0; i < n; i++){
    //         if(i!=row) sum += a[i][j];
    //     }
    //     if(res2 < sum){
    //         res2 = sum; col = j;
    //     }
    // }
    // for(int i = 0; i < n; i++){
    //     if(i!=row){
    //         for(int j = 0; j < m; j++){
    //             if(j!=col) cout << a[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    // }
    return 0;
}