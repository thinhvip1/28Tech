#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<string> v;
void init(){
    queue<string> q;
    q.push("9");
    v.push_back("9");
    while(v.size() < 100){
        string top = q.front();
        q.pop();
        q.push(top + "0");
        q.push(top + "9");
        v.push_back(top + "0");
        v.push_back(top + "9");
    }
}
int main(){
    init();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        for(int i = 0; i < 100; i++){
            ll x = stoll(v[i]);
            if(x % n == 0){
                cout << x << endl;
                break;
            }
        }
    }
}