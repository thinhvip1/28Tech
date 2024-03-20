#include <bits/stdc++.h>
using namespace std;
void tg1(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void tg2(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}
void tg3(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n; j++){
            if(j<i) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}
void tg4(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j<i) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}
void tg5(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(j>1&&j<i&&i!=n) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}
void tg6(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-1+i; j++){
            if(j<=n-i) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}
void tg7(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2*n-1; j++){
            if(j==n-i+1||j==n+i-1||i==n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
void tg8(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= 2*n-1; j++){
            if(j==n||(n-i<j&&j<n+i)) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int n; cin >> n;
    // tg1(n); cout << endl;
    // tg2(n); cout << endl;
    // tg3(n); cout << endl;
    // tg4(n); cout << endl;
    // tg5(n); cout << endl;
    // tg6(n); cout << endl;
    // tg7(n); cout << endl;
    tg8(n); cout << endl;
}