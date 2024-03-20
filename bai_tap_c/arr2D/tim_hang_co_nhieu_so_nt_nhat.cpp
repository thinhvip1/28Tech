#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n < 2) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i = 5; i*i <= n; i+=6)
        if(n%i==0 || n%(i+2)==0) return false;
    return true;
}
int main(){
    int n, m; cin >> n >> m;
    int a[n][m], res = 0, row;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            if(isPrime(a[i][j]))
                cnt++;
        }
        if(res < cnt){
            res = cnt;
            row = i;
        }
    }
    cout << row + 1 << endl;
    for(int j = 0; j < m; j++){
        if(isPrime(a[row][j]))
            cout << a[row][j] << " ";
    }
    return 0;
}