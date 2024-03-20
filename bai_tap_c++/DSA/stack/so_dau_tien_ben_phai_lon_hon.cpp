#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v; int a[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    stack<int> st;
    for(int i = 0; i < n; i++){
        if(st.empty()) st.push(i);
        else{
            while(!st.empty() && v[i] > v[st.top()]){
                a[st.top()] = v[i];
                st.pop();
            }
            st.push(i);
        }

    }
    while(!st.empty()){
        a[st.top()] = -1;
        st.pop();
    }
    for(int x : a) cout << x << " ";
}