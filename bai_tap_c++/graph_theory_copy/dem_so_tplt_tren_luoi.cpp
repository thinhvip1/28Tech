#include <iostream>
// #include <vector>
#include <queue>
char a[1001][1001];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int n;

void dfs(int i, int j){
    a[i][j] = 'o';
    // std::cout << i << " " << j << std::endl;
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && a[i1][j1] == 'x')
            dfs(i1, j1);
    }
}
void bfs(int i, int j){
    std::queue<std::pair<int,int>> q;
    q.push({i,j});
    a[i][j] = 'o';
    while(!q.empty()){
        std::pair<int,int> v = q.front();
        q.pop();
        for(int k = 0; k < 4; k++){
            int i1 = v.first + dx[k];
            int j1 = v.second + dy[k];
            if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && a[i1][j1] == 'x'){
                q.push({i1, j1});
                a[i1][j1] = 'o';
            }
        }
    }
}
int main(){
    std::cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            std::cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == 'x'){
                cnt++;
                // std::cout << "Thanh phan lien thong thu " << cnt << ":\n";
                // dfs(i, j);
                bfs(i, j);
            }
        }
    }
    std::cout << cnt;
    return 0;
}