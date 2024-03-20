#include <bits/stdc++.h>
using namespace std;
int min(int a, int b){
    return a > b ? b : a;
}
void hcn1(int n, int m){
    for(int i = n; i >= 1; i--){
        char init = min(i,m) + 64;
        for(int j = 1; j <= m; j++){
            if(j <= m - i){
                cout << init++;
            }
            else{
                cout << init;
            }
        }
        cout << endl;
    }
}
void hcn2(int n, int m){
    for(int i = 1; i <= n; i++){
        char init = min(i,m)+63;
        for(int j = 1; j <= m; j++){
            if(j <= m - i) cout << init++;
            else cout << init;
        }
        cout << endl;
    }
}
void hcn3(int n, int m){
    for(int i = 1; i <= n; i++){
        char init = min(i,m)+64;
        for(int j = 1; j <= m; j++){
            if(j<=m-i+1) cout << init++;
            else{
                init = m - j + 65;
                while(j<=m){
                    cout << init--; j++;
                }
            }
        }
        cout << endl;
    }
}
int max(int a, int b){
    return a > b ? a : b;
}
void hcn4(int n, int m){
    int init = max(n,m);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(j < i) cout << (char)(init-j+1+96);
            else cout << (char)(init-i+1+96);
        }
        cout << endl;
    }
}
int main(){
    int n, m; cin >> n >> m;
    // hcn1(n,m);
    // hcn2(n,m);
    // hcn3(n,m);
    hcn4(n,m);
}