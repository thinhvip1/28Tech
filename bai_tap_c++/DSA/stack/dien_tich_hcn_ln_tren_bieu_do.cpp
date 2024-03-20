#include <bits/stdc++.h>
using namespace std;
//dùng 2 vòng for lồng nhau
int S(int a[], int n){
    int res = -1;
    for(int i = 0; i < n; i++){
        int cnt = 1;
        for(int j = i-1; j >= 0; j--)
            if(a[i] <= a[j]) cnt++;
            else break;
        for(int k = i+1; k < n; k++)
            if(a[i] <= a[k]) cnt++;
            else break;
        res = max(res, a[i]*cnt);
    }
    return res;
}
// dùng stack
int S1(int a[], int n){
    int res = -1;
    stack<int> st;
    int i = 0;
    while(i < n){
        if(st.empty() || a[i] >= a[st.top()]){
            st.push(i);
            i++;
        }
        else{
            int j = st.top();
            st.pop();
            if(!st.empty()) res = max(res, a[j] * (i-st.top()-1));
            else res = max(res, a[j] * i);             
        }

    }
    while(!st.empty()){
        int j = st.top();
        st.pop();
        if(!st.empty()) res = max(res, a[j] * (i-st.top()-1));
        else res = max(res, a[j] * i);
    }
    return res;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    // cout << S(a, n) << endl;
    cout << S1(a, n) << endl;
}