// thuật toán Kahn dựa trên topo search (xóa dần đỉnh)

#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

const int maxn = 1000;
int in[maxn];
vector<int> adj_list[maxn];

void init(int m){

    memset(in, 0, sizeof(in));

    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj_list[x].push_back(y);
        in[y]++;
    }
}

void Kahn_algo(int n, vector<int> &topo){
    queue<int> q;
    for(int i = 0; i < n; i++){
        if(in[i] == 0){
            q.push(i);
        }
    }

    while(q.empty() == false){
        int node = q.front();
        q.pop();
        topo.push_back(node);
        for(int adj_node : adj_list[node]){
            in[adj_node]--;
            if(in[adj_node] == 0)
                q.push(adj_node);
        }
    }
}
int main(){

    int n, m; cin >> n >> m;
    
    init(m);

    vector<int> topo;

    Kahn_algo(n, topo);
    for(int x : topo) 
        cout << x << " ";

    return 0;
}