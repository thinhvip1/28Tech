#include <bits/stdc++.h>
using namespace std;

int n, x[100], col[100], dx[202], dn[202];

void in(){
    for(int i = 1; i <= n; i++) cout << x[i] << " ";
    cout << endl;
}
void Try(int i){
    // duyet cac gia tri co the xay ra xi = j
    for(int j = 1; j <= n; j++){
        if(col[j] == 0 && dx[i-j+n] == 0 && dn[i+j-1] == 0){
            x[i] = j;
            col[j] = dx[i-j+n] = dn[i+j-1] = 1;
            if(i == n) in();
            else Try(i+1);
            // backtrack
            col[j] = dx[i-j+n] = dn[i+j-1] = 0;
        }
    }   
}
int main(){
    cin >> n;
    Try(1);
}