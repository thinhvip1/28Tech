#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
using namespace std;

vector<int> adj_list[1000];
bool visited[1000];

void adjaceny_list(int m){
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj_list[x].push_back(y);
        // adj_list[y].push_back(x);
    }
}
// breadth first search
void bfs(int u){
    queue<int> q;
    q.push(u);
    while(q.empty() == false){
        int node = q.front();
        q.pop();
        visited[node] = true;
        cout << node << " ";
        for(int adj_node : adj_list[node]){
            if(visited[adj_node] == false)
                q.push(adj_node);
        }
    }
}
// depth first search
void dfs(int node){
    visited[node] = true;
    cout << node << " ";

    for(int adj_node : adj_list[node]){
        if(visited[adj_node] == false)
            dfs(adj_node);
    }
}

void topo_search(stack<int> &st, int node){
    visited[node] = true;
    for(int adj_node : adj_list[node]){
        if(visited[adj_node] == false){
            topo_search(st, adj_node);
        }
    }
    st.push(node);
}
int main(){
    int n, m; cin >> n >> m;
    memset(visited, false, sizeof(visited));
    adjaceny_list(m);
    // bfs(1);
    // dfs(1); 
    stack<int> topo;
    for(int i = 0; i < n; i++){
        if(visited[i] == false)
            topo_search(topo, i);
    }
    while(topo.empty() == false){
        cout << topo.top() << " ";
        topo.pop();
    }
}

//TC
// 9 8
// 1 2
// 1 3
// 2 4
// 2 5
// 3 6
// 4 7
// 6 9
// 8 4