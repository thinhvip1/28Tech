#include <bits/stdc++.h>
// cho mảng 2 chiều. Xuất phát từ bất kì giá trị nào ở hàng đầu. 
// Tìm đường đi đến hàng cuối sao cho tổng lớn nhất
// có thể đi thẳng xuống, chéo trái, chéo phải

int max(int a, int b){
    return a > b ? a : b;
}
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int a[n][m];
    //nhập giá trị cho mảng 2 chiều a
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }   
    }
    // lấy giá trị lớn nhất trong 3 phần tử ở ngày trên a[i][j]
    for(int i = 1; i < n; i++){
        for(int j = 0; j < m;j++){
            int max_val;
            if(j==0) max_val = max(a[i-1][j],a[i-1][j+1]);
            else if(j==m-1) max_val = max(a[i-1][j-1],a[i-1][j]);
            else max_val = max(a[i-1][j-1],max(a[i-1][j],a[i-1][j+1]));
            a[i][j] += max_val;
        }
    }
    int res = -1e9;
    for(int j = 0; j < m; j++)
        res = max(res,a[n-1][j]);
    cout << res;
}