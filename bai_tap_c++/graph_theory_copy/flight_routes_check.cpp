
#include <iostream>
#include <vector>
#include <cstring>
#include <stack>
using namespace std;

const int maxn = 10001;
bool visited[maxn];
vector<int>  adj_list[maxn];
vector<int> r_adj_list[maxn];
stack<int> st;

int init(int m){
    for(int i = 0; i < m; i++){
        int beg, en; cin >> beg >> en;
        adj_list[beg].push_back(en);
        r_adj_list[en].push_back(beg);
    }
}

void dfs1(int node){
    visited[node] = true;
    for(int neibor : adj_list[node]){
        if(visited[neibor] == false){
            dfs1(neibor);
        }
    }
    st.push(node);
    return;
}

void dfs2(int node){
    visited[node] = true;
    for(int neibor : r_adj_list[node]){
        if(visited[neibor] == false)
            dfs2(neibor);
    }
    return;
}

void Kosaraju_alg(int n){
    int cnt = 0;
    memset(visited, false, sizeof(visited));

    for(int i = 1; i <= n; i++){
        if(visited[i] == false){
            dfs1(i);
        }
    }

    memset(visited, false, sizeof(visited));
    vector<int> represent;

    while(!st.empty()){
        int node = st.top();
        st.pop();
        if(visited[node] == false){
            represent.push_back(node);
            dfs2(node);
            cnt++;
        }
    }

    if(cnt == 1) cout << "YES\n";
    else{
        cout << "NO\n";
        memset(visited, false, sizeof(visited));
        dfs1(represent[0]);
        if(visited[represent[1]] == false)
            cout << represent[0] << " " << represent[1];
        else 
            cout << represent[1] << " " << represent[0];
    }
}

int main(){
    int n, m; cin >> n >> m;

    init(m);

    Kosaraju_alg(n);
}