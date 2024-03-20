#include <bits/stdc++.h>
using namespace std;
void solve(int a[], int n){
    int max = -1000001;
    for(int i = 0; i < n; i++){
        if(max < a[i]) max = a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i]!=max){
            int min = max;
            for(int j = 0; j < n; j++){
                if(a[j]>a[i] && min > a[j]) min = a[j];
            }
            cout << min << " ";
        }
        else cout << "_ ";
    }
    cout << endl;
}
void solve1(int a[], int n){
    vector<int> v(a,a+n);
    sort(v.begin(),v.end());
    for(int i = 0; i < n; i++){
        auto it = upper_bound(v.begin(),v.end(),a[i]);
        if(it!=v.end()) cout << *it << " ";
        else cout << "_ ";
    }
    cout << endl;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        // solve(a,n);
        solve1(a,n);
    }
}