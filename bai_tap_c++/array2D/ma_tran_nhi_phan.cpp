#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n][3], cnt = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
            sum += a[i][j];
        }
        if(sum >= 2) cnt++;
    }
    cout << cnt;
}