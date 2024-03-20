#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        getline(cin,v[i]);
    }
    int idx = 0, res = 100000;
    for(int i = 0; i < n; i++){
        if(v[i].size() <= res){
            res = v[i].size();
            idx = i;
        }
    }
    cout << v[idx];
}
