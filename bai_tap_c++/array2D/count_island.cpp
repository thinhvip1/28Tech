#include <bits/stdc++.h>
using namespace std;

#define MAX 100
int a[MAX][MAX];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
void lan_xq(int i, int j, int n, int m){
    // cout << "(" << i << " , " << j << ")" << endl;  
    a[i][j] = 0;
    for(int k = 0; k < 8; k++){
        int i1 = i+dx[k];
        int j1 = j+dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1]) 
            lan_xq(i1,j1,n,m);
    }
}
vector<int> adj[1001];
bool visited[1001];

void dfs(int u){
    visited[u] = true;
    for(int x : adj[u]){
        if(!visited[u]){
            dfs(x);
        }
    }
}
int cnt_isl(int n){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            cnt++;
            dfs(i);
        }
    }
    return cnt;
}
int main(){
    int tc; cin >> tc;
    while (tc--){
        int cnt = 0;
        int n, m; cin >> n >> m;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
                // if(a[i][j]==1){
                //     adj[i+1].push_back(j+1);
                //     adj[j+1].push_back(i+1);
                // }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
                if(a[i][j]){
                    cnt++;
                    lan_xq(i,j,n,m);
                }
        }
        cout << cnt << endl;
        // fill(visited, visited + 1001, false);
        // cout << cnt_isl(n) << endl;
    }
}