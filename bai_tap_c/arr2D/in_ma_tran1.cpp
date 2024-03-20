#include <bits/stdc++.h>
using namespace std;
void swap(int &x, int &y){
    int tmp = x; 
    x = y;
    y = tmp;
}
// void display(int a[][100], int n){
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
int main(){
    int n; cin >> n;
    int a[n][n], b[n][n];
    for(int i = 0; i < n; i++){
        for(int j =0; j < n; j++)
            cin >> a[i][j];
    }
    //in ra ma tran chuyen vi cua mt ban dau theo mau 1
    // 3
    // 1 2 3              1 4 7
    // 4 5 6       -->    2 5 8
    // 7 8 9              3 6 9

    //cach1
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         b[i][j] = a[j][i];
    //     }
    // }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << b[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    //CACH2
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << a[j][i]  << " ";
    //     }
    //     cout << endl;
    // }

    //in ra ma tran chuyen vi cua ma tran ban dau theo mau 2
    // 3
    // 1 2 3                     9 8 7
    // 4 5 6         -->         6 5 4
    // 7 8 9                     3 2 1

    // for(int i = n-1; i >= 0; i--){
    //     for(int j = n - 1; j >= 0; j--){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //in ra ma tran chuyen vi cua ma tran ban dau theo mau 3
    // 3
    // 1 2 3                   9 6 3
    // 4 5 6       ->          8 5 2
    // 7 8 9                   7 4 1

    // for(int i = n-1; i >= 0; i--){
    //     for(int j = n-1; j >= 0; j--){
    //         cout << a[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    //in ra mt chuyen vi cua mt bandau theo mau 4
    // 3
    // 1 2 3           3 6 9
    // 4 5 6       ->  2 5 8
    // 7 8 9           1 4 7

    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j < n; j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}