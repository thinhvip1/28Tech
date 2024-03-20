#include <bits/stdc++.h>
using namespace std;
void hthoi(int n){
    for(int i = 1; i <= 2*n-1; i++){
        if(i<=n){
            for(int j = 1; j <= i; j++) cout << "*";
            cout << endl;
        }
        if(i<=n) continue;
        for(int j = 1; j <= 2*n-i; j++) cout << "*";
        cout << endl;
    }
}
void hthoi_p2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
}
void hthoi2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n+i-1; j++){
            if(j<=n-i) cout << "-";
            else cout << "*";
        }
        cout << endl;
    }
    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j <= n-1+i; j++){
            if(j<=n-i) cout << "-";
            else cout << "*";
        }
        cout << endl;
    }
}
void hthoi3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2*n; j++){
            if(j>=n-i+2 && j<=n+i-1) cout << "~";
            else cout << "*";
        }
        cout << endl;
    }
    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j <= 2*n; j++){
            if(j>=n-i+2&&j<=n+i-1) cout << "~";
            else cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n; cin >> n;
    // hthoi(n); cout << endl;
    // hthoi_p2(n); cout << endl;
    // hthoi2(n); cout << endl;
    hthoi3(n); cout << endl;
}