#include <iostream>
#include <queue>
using namespace std;

int n, m;
vector<int> adj[1001]; // lưu danh sách kề
bool visited[1001]; // kiểm tra đã thăm đỉnh u chưa

//breadth first search
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout << v << " ";
        for(int x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}
int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    // memset(visited, false, sizeof(visited));
    fill(visited, visited + 1001, false);
    BFS(1);
}