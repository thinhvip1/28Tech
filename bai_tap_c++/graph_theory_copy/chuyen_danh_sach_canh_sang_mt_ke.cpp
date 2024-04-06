#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int a[n][n];
    // khởi tạo tất cả giá trị của ma trận a bằng 0
    memset(a, 0, sizeof(a));

    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        a[x-1][y-1] = 1;
        a[y-1][x-1] = 1;
    }
    for(int i = 0; i < n; i++){
        for(int x : a[i]) cout << x << " ";
        cout << endl;
    }
    return 0;
}