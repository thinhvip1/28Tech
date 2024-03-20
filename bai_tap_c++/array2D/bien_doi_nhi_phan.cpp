#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, m; cin >> n >> m;
        int a[n][m], res[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
                res[i][j] = a[i][j];
            }            
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j]==1){
                    int k;
                    for(k = 0; k < n; k++)
                        res[k][j] = 1;
                    for(k = 0; k < m; k++)
                        res[i][k] = 1;
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
}