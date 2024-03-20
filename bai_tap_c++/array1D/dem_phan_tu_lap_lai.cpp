#include <bits/stdc++.h>
using namespace std;
int cnt[1000001];
int cnt_repeat_num(int a[],int n){
    fill(cnt,cnt+1000001,0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        if(cnt[a[i]]>1) res++;
    }
    return res;
}
int cnt1(int a[],int n){
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    int cnt = 0;
    for(auto it : mp){
        if(it.second>1) cnt += it.second;
    }
    return cnt;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        // cout << cnt_repeat_num(a,n) << endl;
        cout << cnt1(a,n) << endl;
    }
}