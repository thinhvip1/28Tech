#include <bits/stdc++.h>
using namespace std;
int n, m; 
vector<int> adj[1001];
bool visited[1001];

// depth first search
void DFS(int u){
    cout << u << " ";
    visited[u] = true; // đánh dấu là đỉnh u đã được duyệt 
    if(visited[u]){
        for(int v : adj[u]){ // duyệt các đỉnh v kề với đỉnh u
            // nếu đỉnh v chưa được duyệt thì gọi lại hàm dfs
            if(!visited[v])
                DFS(v); 
        } 
    }
}
int main(){
    cin >> n >> m; // n là số đỉnh của đồ thị, m là số cạnh của đồ thị
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x); // đồ thị vô hướng nên x kề y và y cũng kề x
    }

    memset(visited, false, sizeof(visited));
    DFS(1);
}