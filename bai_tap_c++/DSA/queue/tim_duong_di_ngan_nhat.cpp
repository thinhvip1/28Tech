#include <bits/stdc++.h>
using namespace std;
/*
A[9] = {{1,0,1,1,1,1,0,1,1,1},
        {1,0,1,0,1,1,1,0,1,1},
        {1,1,1,0,1,1,0,1,0,1},
        {0,0,0,0,1,0,0,0,0,1},
        {1,1,1,0,1,1,1,0,1,0},
        {1,0,1,1,1,1,0,1,0,0},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,1,1,1,1,0,1,1,1},
        {1,1,0,0,0,0,1,0,0,1}};
BEGIN: A[0][0]
END: A[3][4];
*/
// typedef first fi;
// typedef second se;
// typedef third thi;
// const int Max 100;
#define Max 100
int row[4] = {-1, 0, 0, 1};
int col[4] = {0, -1, 1, 0};

void input(int a[][100], int &n, int &m, int &i_s, int &j_s, int &i_e, int &j_e){
    cin >> n >> m >> i_s >> j_s >> i_e >> j_e;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    }
}
// duyệt 4 vị trí xq của mỗi vị trí trong queue
// duyệt đến vị trí nào thì push vị trí đó vào queue nếu vị trí đó có gt = 1 và chưa từng duyệt qua
int count(int a[][Max],int n, int m, int i_s, int j_s, int i_e, int j_e){
    queue<tuple<int,int,int>> q; // lưu chỉ số hàng, chỉ số cột, số bước đi
    set<pair<int,int>> se; // lưu vị trí đã từng duyệt qua
    se.insert({i_s, j_s}); // chèn vị trí đầu tiền vào set
    q.push({i_s, j_s, 0});
    // cout << get<0>(q.front()) << " " << get<1>(q.front()) << " " << get<2>(q.front()) << endl;
    while(!q.empty()){
        tuple<int,int,int> tmp = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int i_next = get<0>(tmp) + row[i];
            int j_next = get<1>(tmp) + col[i];
            if(i_next >= 0 && i_next < n && j_next >= 0 && j_next < m && a[i_next][j_next] == 1){
                if(i_next == i_e && j_next == j_e) 
                    return get<2>(tmp) + 1;
                if(se.find({i_next,j_next}) == se.end()){
                    q.push({i_next, j_next, get<2>(tmp) + 1});
                    // cout << get<0>(q.front()) << " " << get<1>(q.front()) << " " << get<2>(q.front()) << endl;
                    se.insert({i_next, j_next});
                } 
            }
        }
    }
    return -1;
}
int main(){
    int a[Max][Max], n, m, i_s, j_s, i_e, j_e;
    input(a, n, m, i_s, j_s, i_e, j_e);
    if(a[i_s][j_s] && a[i_e][j_e])
        cout << count(a, n, m, i_s, j_s, i_e, j_e);
    else
        cout << "-1\n";
}