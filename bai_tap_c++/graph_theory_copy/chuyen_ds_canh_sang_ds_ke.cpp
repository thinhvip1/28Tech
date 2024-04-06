#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m; // n la so dinh cua do thi, m la so canh cua do thi
    vector<vector<int>> v(n);
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        v[x-1].push_back(y);
        v[y-1].push_back(x);
    }
    for(int i = 0; i < v.size(); i++){
        cout << i + 1 << " : ";
        for(int x : v[i]) cout << x << " ";
        cout << endl;
    }
}