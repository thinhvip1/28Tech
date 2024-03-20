#include <bits/stdc++.h>
using namespace std;
void mt1(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n+i-1; j++){
            if(j<=(i-1)*2) cout << "~";
            else cout << "*";
        }
        cout << endl;
    }
    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j < n+i; j++)    
            if(j<=(i-1)*2) cout << "~";
            else cout << "*";
        cout << endl;
    }
}
void mt2(int n){
    for(int i = n; i >=1; i--){
        for(int j = 1; j <= 2*i-1; j++)
            if(j<i) cout << "~";
            else cout << "*";
        cout << endl;
    }
    for(int i = 1; i <= n-1; i++){
        for(int j = 1; j <= 2*i+1; j++)
            if(j<i+1) cout << "~";
            else cout << "*";
        cout << endl;
    }
}
int main(){
    int n; cin >> n;
    // mt1(n);
    mt2(n);
}