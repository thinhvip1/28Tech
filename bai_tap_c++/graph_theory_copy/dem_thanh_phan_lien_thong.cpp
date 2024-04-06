#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];
void dfs(int u){
    visited[u] = true;
    // cout << u << " ";
    for(int x : adj[u]){
        if(!visited[x]){
            dfs(x);
        }
    }
}
int cnt_tplt(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            cnt++;
            dfs(i); // bfs
        }
    }
    return cnt;
}
int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    fill(visited, visited + 1001, false);
    cout << cnt_tplt();
}