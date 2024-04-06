#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> adj[1001];
bool visited[1001];
int parent[1001];

void dfs(int u){
    visited[u] = true;
    for(int x : adj[u]){
        if(!visited[x]){
            parent[x] = u;
            dfs(x);
        }
    }
}
void bfs(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        visited[v] = true;
        for(int x : adj[v]){
            if(!visited[x]){
                q.push(x);
                parent[x] = v;
                visited[x] = true;
            }
        }
    }
}
void path(int t, int s){
    fill(visited, visited + 1001, false);
    fill(parent, parent + 1001, 0);
    // dfs(t);
    bfs(t);
    if(!visited[s]) cout << "Khong co duong di tu " << t << " toi " << s << endl;
    else{
        vector<int> ans;
        while(s != t){
            ans.push_back(s);
            s = parent[s];
        }
        ans.push_back(s);
        reverse(ans.begin(), ans.end());
        for(int x : ans) cout << x << " ";
        cout << endl;
    }
}
int main(){
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int tc; cin >> tc;
    while(tc--){
        int t, s; cin >> t >> s;
        path(t, s);
    }
    return 0;
}