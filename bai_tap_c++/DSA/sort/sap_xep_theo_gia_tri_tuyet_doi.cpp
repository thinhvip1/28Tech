#include <bits/stdc++.h>
using namespace std;
int a[1000001];
int n,x;
//stable_sort: giữ tính ổn định của dãy
int cmp(int a, int b){
    return abs(x-a) < abs(x-b);
}
//sort, a.second lưu thêm vị trí của phần tử
int cmp1(pair<int,int> a, pair<int,int> b){
    if(abs(x-a.first)!=abs(x-b.first))
        return abs(x-a.first) < abs(x-b.first);
    return a.second < b.second;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        cin >> n >> x;
        // for(int i = 0; i < n; i++){
        //     cin >> a[i];
        // }
        // stable_sort(a,a+n,cmp);
        // for(int i = 0; i < n; i++){
        //     cout << a[i] << " ";
        // }
        pair<int,int> v[n];
        for(int i = 0; i < n; i++){
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v, v+n,cmp1);
        for(int i = 0; i < n; i++){
            cout << v[i].first << " ";
        }
        cout << endl;
    }
}