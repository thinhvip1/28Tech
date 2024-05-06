// đếm số thành phần liên thông mạnh trên đồ thị có hướng

#include <iostream>
#include <vector>
#include <cstring>
#include <stack>
using namespace std;

const int maxn = 1000;
bool visited[maxn];
vector<int> adj_list[1000];
vector<int> r_adj_list[1000]; // reverse graph

void init(int m){    
    for(int i = 0; i < m; i++){
        int beg, en; cin >> beg >> en;
        adj_list[beg].push_back(en);
        r_adj_list[en].push_back(beg);
    }    
}

void dfs1(int node, stack<int> &st){
    visited[node] = true;
    for(int neibor : adj_list[node]){
        if(visited[neibor] == false)
            dfs1(neibor, st);
    }
    st.push(node);

    return;
}

// dfs trên reverse graph
void dfs2(int node){
    visited[node] = true;
    cout << node << " ";
    for(int neibor : r_adj_list[node]){
        if(visited[neibor] == false)
            dfs2(neibor);
    }
    return;
}
int Kosaraju_algo(int n){
    int cnt = 0;
    memset(visited, false, sizeof(visited));

    stack<int> st;
    for(int i = 1; i <= n; i++){
        if(visited[i] == false){
            dfs1(i, st);
        }
    }

    memset(visited, false, sizeof(visited));

    while(!st.empty()){
        int node = st.top();
        st.pop();
        if(visited[node] == false){
            dfs2(node);
            cout << endl;
            cnt++;
        }
    }

    return cnt;
}
int main(){
    int n, m; cin >> n >> m;

    init(m);

    cout << Kosaraju_algo(n);
}