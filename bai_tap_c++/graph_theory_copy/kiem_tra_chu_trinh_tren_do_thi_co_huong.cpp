#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int maxn = 1000;
int status[maxn]; // 0 : not visit,         1 : visited,        2 : visited completely
vector<int> adj_list[maxn];
int parent[maxn]; // lưu node cha của node i
int in[maxn]; // lưu bán bậc vào của 1 đỉnh

void init(int m){
    memset(status, 0, sizeof(status));
    memset(parent, 0, sizeof(parent));
    memset(in, 0, sizeof(in));
    for(int i = 0; i < m; i++){
        int beg, en; cin >> beg >> en;
        adj_list[beg].push_back(en);
        in[en]++;
    }
}

int st_path, end_path; // lưu đầu và cuối của chu trình
//using depth first search
bool dfs(int node){
    status[node] = 1;
    for(int neibor : adj_list[node]){
        if(status[neibor] == 0){ //neibor chưa thăm
            parent[neibor] = node;
            if(dfs(neibor))
                return true;
            
        }
        else if(status[neibor] == 1){ // neibor chưa thăm xong
            st_path = neibor;
            end_path = node;
            return true;
        }
    }
    status[node] = 2;
    return false;
}

//using Kahn algorithms
bool Kahn(int n){
    queue<int> q;
    for(int i = 1; i <=n; i++){
        if(in[i] == 0) 
            q.push(i);
    }
    int cnt = 0;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cnt++;

        for(int neibor : adj_list[node]){
            in[neibor]--;
            if(in[neibor] == 0){
                q.push(neibor);
            }
        }
    }
    return cnt != n; // thuật toán Kahn sẽ k duyệt hết được các nút trên đồ thị có hướng có chu trình
}

int main(){
    int n, m; cin >> n >> m;
    init(m);

    // bool flag = true;
    // for(int i = 1; i <= n; i++){
    //     if(dfs(i)){
    //         cout << "YES\n";

    //         vector<int> path;
    //         path.push_back(st_path);
    //         while(end_path != st_path){
    //             path.push_back(end_path);
    //             end_path = parent[end_path];
    //         }
    //         path.push_back(end_path);
    //         reverse(path.begin(), path.end());
    //         for(int x : path)
    //             cout << x << " ";

    //         flag = false;
    //         break;
    //     }
    // }
    
    // if(flag) cout << "NO\n";

    if(Kahn(n)) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}