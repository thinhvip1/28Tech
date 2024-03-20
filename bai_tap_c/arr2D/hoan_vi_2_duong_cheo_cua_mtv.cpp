#include <bits/stdc++.h>
using namespace std;
void swap(int &x, int &y){
    int tmp = x; 
    x = y;
    y = tmp;
}
int main(){
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        swap(a[i][i],a[i][n-1-i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout <<endl;
    }
}