#include <bits/stdc++.h>
using namespace std;
void hcn1(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cout << "*";
        cout << endl;
    }
    cout << endl;
}
void hcn2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i==1||i==n||j==1||j==n) cout << "*";
            else cout <<" ";
            }
        
        cout << endl;
    }
}
void hcn3(int n, int m){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i==1||i==n||j==1||j==m) cout << "*";
            else cout << " ";
            }
        
        cout << endl;
    }
}
int main(){
    int n; cin >> n;
    hcn1(n);
    hcn2(n); 
    int x,y; cin >> x >> y;
    hcn3(x,y);

}