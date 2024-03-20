#include <bits/stdc++.h>
using namespace std;
// dung mang 2 chieu
void hcn1(int n, int m){
    int a[n][m];
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0; j < m; j++){
            if(j==0){
                a[i][j] = i+1;
            } 
            else if(a[i][j-1]<m && !flag){
                a[i][j] = a[i][j-1] + 1;
            }
            else
                a[i][j] = m - j;
            if(a[i][j]>=m) flag = true;
            
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
}
// dung vong lap
void hcn1_p1(int n, int m){
    for(int i = 1; i <= n; i++){
        int j;
        if(i<m){
            for(j = i; j <= m; j++)
                cout << j;
            j = i - 1;
        }
        else {
            cout << i;
            j = m-1;
        }
        while(j>=1) cout << j--;
        cout << endl;
    }
}
int min(int a, int b){
    return a > b ? b : a;
}
void hcn1_p2(int n, int m){
    for(int i = 1; i <= n; i++){
        cout << i;
        for(int j = 1; j < m; j++){
            if(j<=m-i) cout << i+j;
            else{
                int init = min(i-1,m-1);
                while(j<m){
                    cout << init--; j++;
                }
            }
        }
        cout << endl;
    }
}
void hcn2(int n, int m){
    for(int i = 1; i <= n; i++){
        int init = i;
        for(int j = 1; j <= m; j++){
            if(j <= m-i) cout << init++;
            else cout << init--;
        }
        cout << endl;
    }
}
void hcn3(int n, int m){
    for(int i = 1; i <= n; i++){
        int init = i;
        for(int j = 1; j <= m; j++){
            if(j <= i-1) cout << init--;
            else cout << init++;
        }
        cout << endl;
    }
}
int max(int a, int b){
    return a>b ? a : b;
}
void hcn4(int n, int m){
    int tmp = max(n,m);
    for(int i = 1; i <= n; i++){
        int init = tmp-i+1;
        for(int j = 1; j <= m; j++){
            if(j < tmp-i+1) cout << init--;
            else cout << init++;
        }
        cout << endl;
    }
}
int main(){
    int n, m; cin >> n >> m;
    // hcn1(n,m); cout << endl;
    // hcn1_p1(n,m); cout << endl;
    // hcn1_p2(n,m);
    // hcn2(n,m);
    // hcn3(n,m);
    hcn4(n,m);
}