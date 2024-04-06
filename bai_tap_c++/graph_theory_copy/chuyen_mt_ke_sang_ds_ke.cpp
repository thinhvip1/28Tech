#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    vector<vector<int>> v(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j]) v[i].push_back(j+1);
        }
    }
    for(int i = 0; i < v.size(); i++){
        cout << i + 1 << " : ";
        for(int x : v[i]) cout << x << " ";
        cout << endl; 
    }
}