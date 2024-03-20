#include <bits/stdc++.h>
using namespace std;
#define MAX 500
int a[MAX][MAX], dp[MAX][MAX];
int n, m;
// a[i-1][j-1], a[i-1][j], a[i][j-1]
int min(int x, int y){
    return x < y ? x : y;
}
int min(int x, int y, int z){
    return min(min(x,y),z);
}
int max(int x, int y){
    return x > y ? x : y;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc; cin >> tc;
    while(tc--){
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
                cin >> a[i][j];
        }
        // quy hoạch động
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i==0 || j==0 || a[i][j]==0) dp[i][j] = a[i][j];
                else{
                    dp[i][j] = min(dp[i-1][j-1], dp[i-1][j], dp[i][j-1]) + 1;
                }
            }
        }
        int res = 0;
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                res = max(res,dp[i][j]);
            }
        }
        cout << res << endl;
        memset(a,0,sizeof(int)*n*m);
    }
    return 0;
}