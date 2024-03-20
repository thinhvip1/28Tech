#include <bits/stdc++.h>
using namespace std;
// giả sử giá trị của ma trận = tổng đường chéo chính - tổng đường chéo phụ
// tìm dãy con có giá trị lớn nhất
int min(int a, int b){
    return a < b ? a : b;
}
int max(int a, int b){
    return a > b ? a : b;
}
int main(){
    int n; cin >> n;
    int a[n+1][n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    int major[n+1][n+1], minor[n+2][n+2];
    memset(major,0,sizeof(major));
    memset(minor,0,sizeof(minor));
    //gán giá trị cho ma trận chứa tổng đường chéo chính
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            major[i][j] = major[i-1][j-1] + a[i][j];
        }
    }
    //gán giá trị cho ma trận chứa tổng đường chéo phụ
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            minor[i][j] = minor[i-1][j+1] + a[i][j];
        }
    }
    // tìm giá trị lớn nhất
    int res = 0; //giá trị của ma trận có kích thước 1 x 1
    for(int i = n; i>=1; i--){
        for(int j = n; j >= 1; j--){
            int tmp = min(i,j);
            int hang = i-tmp, cot = j-tmp;
            for(int k = 0; k < tmp; k++){
                res = max(res,(major[i][j]-major[hang+k][cot+k])-
                                (minor[i][cot+1+k] - minor[hang+k][j+1]));
            }
        }
    }
    cout << res;
}