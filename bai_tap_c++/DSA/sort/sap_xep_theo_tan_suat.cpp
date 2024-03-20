#include <bits/stdc++.h>
using namespace std;
int cnt[100001];
map<int,int> mp;
int cmp(int a, int b){
    if(cnt[a] != cnt[b])
        return cnt[a] > cnt[b];
    return a < b;
}

int cmp1(int a, int b){
    if(mp[a] != mp[b])
        return mp[a] > mp[b];
    return a < b;
}

int cmp2(pair<int,int> a, pair<int,int> b){
    if(a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
// cach1
        /* memset(cnt,0,sizeof(cnt));
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            cnt[a[i]]++;
        }
        sort(a,a+n,cmp);
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl; */
// cach2
        /* int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a, a+n, cmp1);
        for(int x : a) cout << x << " ";
        cout << endl;
        mp.clear(); */
// cach3
        int n; cin >> n;
        map<int,int> mp1;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp1[x]++;
        }
        vector<pair<int,int>> v;
        for(auto it : mp1)
            v.push_back(it);
        sort(v.begin(), v.end(), cmp2);
        for(auto it : v){
            for(int i = 0; i < it.second; i++) cout << it.first << " ";
        }
        cout << endl;
    }
}