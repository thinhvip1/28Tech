#include <bits/stdc++.h>
using namespace std;
vector<string> v;
void init(){
    v.push_back("6");
    v.push_back("8");
    queue<string> q;
    // q.push(v[0]);
    // q.push(v[1]);
    q.push("6");
    q.push("8");
    // int i = 2;
    while(1){
        string top = q.front();
        q.pop();
        if(top.size() == 15) break;
        q.push(top + "6");
        q.push(top + "8");
        v.push_back(top + "6");
        v.push_back(top + "8");
    }
}
int main(){
    init();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        vector<string> tmp;
        for(string s : v){
            if(s.size() > n) break;
            tmp.push_back(s);
        }
        reverse(tmp.begin(), tmp.end());
        for(string s : tmp) cout << s << " ";
        /* stack<string> st;
        for(int i = 0; v[i].size() <= n; i++)
            st.push(v[i]);
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        } */
        cout << endl;
    }
}