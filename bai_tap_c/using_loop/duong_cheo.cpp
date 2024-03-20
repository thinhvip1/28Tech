#include <bits/stdc++.h>
using namespace std;
void dc1(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j<=i) cout << "*";
            else cout << "~";
        }
        cout << endl;
    }
}
void dc2(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n; j++){
            if(j<=i) cout << "*";
            else cout << "~";
        }
        cout << endl;
    }
}
void hbh(int n, int m){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m+i-1; j++){
            if(j<i) cout << "~";
            else cout << "*";
        }
        cout << endl;
    }
}
void hcn5(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j<=n-i) cout << "~";
            else if(i==n||j==n||j==n-i+1)  cout << "*";
            else cout << " ";
        }
        cout << endl; 
    }
}

int main(){
    int n; cin >> n;
    // dc1(n); cout << endl;
    // dc2(n); cout << endl;
    // int m; cin >> m;
    // hbh(n,m); cout << endl;
    hcn5(n); cout << endl;
}