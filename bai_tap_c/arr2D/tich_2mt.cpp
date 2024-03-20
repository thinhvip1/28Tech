#include <bits/stdc++.h>
using namespace std;
#define MAX 100
void init(int a[][MAX], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
}
void display(int a[][MAX], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int n, m; cin >> n >> m;
    int a[MAX][MAX], b[MAX][MAX];
    init(a,n,m);
    // tich của ma trận với ma trận chuyển vị của nó
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            b[i][j] = 0;
            for(int k = 0; k < m; k++){
                b[i][j] += a[i][k]*a[j][k];
            } 
        }
    }
    display(b,n,n);
}