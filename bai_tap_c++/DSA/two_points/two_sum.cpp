#include <bits/stdc++.h>
using namespace std;

int cmp(pair<int,int> a, pair<int,int> b){
    if(a.first != b.first) return a.first < b.first;
    return a.second < b.second;
}
void solve2(int a[], int n, int s){
    // first lưu giá trị, second lưu vị trí
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        v[i].first = a[i];
        v[i].second = i+1;
    }
    
    //mặc định ko có comparator thì pair sẽ sắp xếp tăng dần theo first
    sort(v.begin(), v.end(), cmp);
    // for(int i = 0; i < n; i++) cout << v[i].first << " " << v[i].second << endl; cout << endl;
    
    int l = 0, r = n-1, sum = 0;
    bool flag = false;
    while(l < r){
        sum = v[l].first + v[r].first;
        if(sum < s) l++;
        else if(sum > s) r--;
        else{
            flag = true;
            cout << v[l].second << " " << v[r].second << endl;
            l++, r--;
        }
    }
    if(!flag) cout << "IMPOSSIBLE";
}
int main(){
    int n, s; cin >> n >> s;
    int a[n];
    for(int &x : a) cin >> x;
    solve2(a, n, s);
}