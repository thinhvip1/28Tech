#include <bits/stdc++.h>
using namespace std;
void swap(int &x, int &y){
    int tmp = x;
    x = y; 
    y = tmp;
}
int main(){
    int n,m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int row1, row2; cin >> row1 >> row2;
    for(int j = 0; j < m; j++) swap(a[row1-1][j],a[row2-1][j]);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}