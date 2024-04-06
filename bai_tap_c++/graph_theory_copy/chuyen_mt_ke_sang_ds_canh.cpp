#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n; // n la so dinh cua do thi
    int a[n][n];
    // memset(a, 0, sizeof(a));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1 && i < j){
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
}