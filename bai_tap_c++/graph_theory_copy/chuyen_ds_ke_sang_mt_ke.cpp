#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    cin.ignore();
    int a[n][n];
    memset(a, 0, sizeof(a));
    vector<vector<int>> v(n);
    for(int i = 0; i < n; i++){
        string s, num;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> num){
            int x = stoi(num);
            v[i].push_back(x);
        }
    }
    for(int i = 0; i < n; i++){
        for(int x : v[i])
            a[i][x-1] = 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}