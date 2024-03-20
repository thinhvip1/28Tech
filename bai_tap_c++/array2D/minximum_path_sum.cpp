#include <bits/stdc++.h>
using namespace std;
// cho mảng 2 chiều tìm đường đi từ a[0][0] -> a[n-1][m-1] sao cho sum nhỏ nhất
// có thể đi sang phải hoặc xuống dưới
int min(int a, int b){
    return a < b ? a : b;
}
int main(){
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int min_val;
            if(i==0 && j==0) continue;
            else if(i==0) min_val = a[i][j-1];
            else if(j==0) min_val = a[i-1][j];
            else min_val = min(a[i-1][j],a[i][j-1]);
            a[i][j] += min_val;
        }
    }
    cout << a[n-1][m-1];
}