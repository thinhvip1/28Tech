#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n*n];
        int res[n][n];
        for(int i = 0; i < n*n; i++) cin >> a[i];
        int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1;
        int cnt = 0;
        while(h1<=h2 && c1<=c2){
            for(int i = c1; i <= c2; i++)
                res[h1][i] = a[cnt++];
            h1++;
            for(int i = h1; i <= h2; i++)
                res[i][c2] = a[cnt++];
            c2--;
            if(c1 <= c2){
                for(int i = c2; i >= c1; i--)
                    res[h2][i] = a[cnt++];
                h2--;
            }
            if(h1 <= h2){
                for(int i = h2; i >= h1; i--)
                    res[i][c1] = a[cnt++];
                c1++;
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++) cout << res[i][j] << " ";
            cout << endl;
        }
    }
}