#include <bits/stdc++.h>
using namespace std;
vector<string> res;

void init(){    
    res.push_back("1");
    queue<string> q;
    q.push("1");
    while(res.size() <= 10000){
        string top = q.front();
        q.pop();
        res.push_back(top + "0");
        res.push_back(top + "1");
        q.push(top + "0");
        q.push(top + "1");
    }
}
int main(){
    init();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        for(int i = 0; i < n; i++) cout << res[i] << " ";
        cout << endl;
    }
}