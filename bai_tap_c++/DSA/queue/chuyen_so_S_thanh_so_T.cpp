#include <bits/stdc++.h>
using namespace std;
// buoc a : S = S - 1
// buoc b : S = S * 2
int count(int s, int t){
    // int cnt = 0;
    queue<pair<int,int>> q; //lưu giá trị và số bước đi
    set<int> se; //lưu giá trị từng duyệt qua
    se.insert(s);
    q.push({s, 0});
    while(!q.empty()){
        pair<int,int> tmp = q.front();
        q.pop();
        if(tmp.first == t) return tmp.second;
        if(tmp.first * 2 == t || tmp.first - 1 == t) return tmp.second + 1;
        if(se.find(tmp.first * 2) == se.end() && tmp.first < t){
            q.push({tmp.first * 2, tmp.second + 1});
            se.insert(tmp.first * 2);
        }
        if(se.find(tmp.first-1) == se.end() && tmp.first > 1){
            q.push({tmp.first - 1, tmp.second + 1});
            se.insert(tmp.first - 1);
        }
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int s, t; cin >> s >> t;
        cout << count(s, t) << endl;
    }
}