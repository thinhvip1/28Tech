#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int a[n+1][m+1], prefix[n+1][m+1];
    //nhập mảng 2 chiều a 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    // khởi tạo mảng 2 chiều cộng dồn
    memset(prefix,0,sizeof(prefix));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + a[i][j];
        }
    }

    // tính tổng dựa theo hàng và cột trên mảng 2 chiều
    int q; cin >> q;
    while(q--){
        int h1, h2, c1, c2;
        cin >> h1 >> h2 >> c1 >> c2;
        int res = prefix[h2][c2] - prefix[h1-1][c2] - prefix[h2][c1-1] + prefix[h1-1][c1-1];
        cout << res << endl;   
    }
}