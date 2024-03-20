#include <bits/stdc++.h>
using namespace std;
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int main(){
    int n, m; cin >> n >> m;
    int a[n+1][m+1];
    int b[n][m];
    // int prefix[n+3][m+3];
    // // khởi tạo giá trị 0 cho tất cả phần tử trong mảng a
    // memset(a, 0, sizeof(a));

    //nhập mảng 2 chiều a có n hàng, m cột
    for(int j = 0; j < n; j++){
        for(int k = 0; k < m; k++){
            cin >> a[j][k];
            b[j][k] = a[j][k];
        }
    }

    // cách 1: sử dụng mảng cộng dồn
    // // khởi tạo giá trị 0 cho tất cả phần tử trong mảng 2 chiều prefix
    // memset(prefix, 0, sizeof(prefix));
    // // cộng dồn mảng 2 chiều a 
    // for(int j = 2; j <= n+2; j++){
    //     for(int k = 2; k <= m+2; k++){
    //         prefix[j][k] = prefix[j-1][k] + prefix[j][k-1] - prefix[j-1][k-1] + a[j-2][k-2];
    //     }
    // }
    // // thay thế phần tử trong ma trận a bằng tổng các phần tử xung quanh với chính nó
    // for(int j = 0; j < n; j++){
    //     for(int k = 0; k < m; k++){
    //         a[j][k] = prefix[j+3][k+3] - prefix[j][k+3] - prefix[j+3][k] + prefix[j][k];
    //     }
    // }

    // cach 2: cộng những phần tử xung quanh
    for(int j = 0; j < n; j++){
        for(int k = 0; k < m; k++){
            // duyệt từng phần tử xung quanh
            for(int h = 0; h < 8; h++){
                int j_new = j + dx[h], k_new = k + dy[h];
                if(j_new>=0 && j_new<n && k_new>=0 && k_new<m) b[j][k] += a[j_new][k_new];
            }
        }
    }
    // in ma trận a ra màn hình
    for(int j = 0; j < n; j++){
        for(int k = 0; k < m; k++){
            cout << b[j][k] << " ";
        }
        cout << endl;
    }
}