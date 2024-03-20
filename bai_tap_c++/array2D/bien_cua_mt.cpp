#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin >> tc;
    srand(time(nullptr));
    while(tc--){
        int n; cin >> n;
        int a[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                a[i][j] = rand() % 10;
            }
        }
        for(int i = 0; i < n; i++){
            for(int x : a[i]) cout << x << " ";
        }
        cout << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i==0 || i==n-1 || j==0 || j==n-1) 
                    cout << a[i][j];
                else cout << " ";
                cout << " ";
            }
            cout << endl;
        }
    }
}