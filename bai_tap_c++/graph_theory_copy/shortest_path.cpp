#include <iostream>
#include <vector>
#include <queue>
using namespace std;

char a[1001][1001]; // lưới đồ thị
int dis[1001][1001]; // lưu khoảng cách từ điểm (i, j) đến điểm bắt đầu

// lưu chỉ số của ô tiếp theo
int dx[4] = {-1, 0, 0, 1}; 
int dy[4] = {0, -1, 1, 0};

// nhập nội dung cho lưới đồ thị
void inp(int n, int &x1, int &y1, int &x2, int &y2){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j]; // 'o' : có thể đi và 'x' : không thể đi
            if(a[i][j] == 'A'){
                x1 = i; y1 = j;
            }
            else if(a[i][j] == 'B'){
                x2 = i; y2 = j;
            }
        }
    }
}

// kiểm tra xem điểm (x,y) còn nằm trong lưới đồ thị hay không
bool check(int x, int y, int n){
    if(x >= 1 && x <= n && y >= 1 && y <= n)
        return true;

    return false;
}

//using bfs to solve
void bfs(int n, int x1, int y1, bool &flag){
    queue<pair<int,int>> q;
    q.push({x1, y1});
    dis[x1][y1] = 0; // khoảng cách từ điểm (x1, y1) đến chính nó
    a[x1][y1] = 'x';
    while(!q.empty()){
        pair<int, int> top = q.front();
        // cout << top.first << " " << top.second << endl;
        q.pop();
        for(int k = 0; k < 4; k++){
            int x_next = top.first + dx[k];
            int y_next = top.second + dy[k];

            if(check(x_next, y_next, n) && a[x_next][y_next] != 'x'){
                dis[x_next][y_next] = dis[top.first][top.second] + 1;

                if(a[x_next][y_next] == 'B'){
                    flag = true; 
                    return;
                }
    
                q.push({x_next, y_next});
                a[x_next][y_next] = 'x';
            }
        }
    }
}
int main(){
    int n; cin >> n;
    // char a[1001][1001]; // lưới đồ thị
    int x1, y1, x2, y2; // lưu địa chỉ của điểm đầu và điểm cuối
    bool flag = false; // nếu tìm được đường đi từ A tới B flag sẽ thay đổi thành true

    inp(n, x1, y1, x2, y2);

    bfs(n, x1, y1, flag);

    if(flag)
        cout << dis[x2][y2] << endl;
    else cout << "Khong co duong di tu A den B ";
    // system("pause");
    return 0;
}