#include <iostream>
#include <vector>
#define MAX 10002
using namespace std;
// const int MAX = 10002;
vector<int> adj_list[MAX]; // lưu trữ các đỉnh kề
bool visited[MAX];
int n, m;

// chuyển từ danh sách cạnh sang danh sách kề
void transform(){
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }
}
int cnt = 0;
//kiểm tra xem 1 nút có mấy cha
bool dfs(int currNode, int parent){
    if(visited[currNode] == true) return false;
    visited[currNode] = true; 
    // cout << currNode << " ";
    for(int child : adj_list[currNode]){
        if(child != parent){
            bool result = dfs(child, currNode);
            if(result == false) return false;
        }
    }

    return true;
}
bool IsTree(){
    if(dfs(1, -1) == false) return false;

    //kiểm tra xem đã thăm hết các nút chưa
    for(int i = 1; i <= n; i++)
        if(visited[i] == false) return false;

    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);

    fill(visited, visited + MAX, false);
    cin >> n >> m;
    transform();
    if(IsTree() == true) cout << "YES";
    else cout << "NO";
}