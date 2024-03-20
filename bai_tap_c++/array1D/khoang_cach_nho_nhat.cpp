#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    if(*x < *y) return -1;
    return 1;
}
int min(int a, int b){
    return a > b ? b : a;
}
void solve_by_arr(int a[], int n){
    for(auto &x : a) cin >> x;
    qsort(a,n,sizeof(int),cmp);
    int min_val = 1e6;
    for(int i = 0; i < n-1; i++){
        min_val = min(min_val,a[i+1]-a[i]);
    }
    cout << min_val << endl;
}
void solve_by_multiset(int n){
    multiset<int>ms;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        ms.insert(x);
    }
    multiset<int>::iterator it = ms.begin();
    int min_val = 1e6;
    advance(it,1);
    while(next(it) != ms.end()){
        int current_it = *it;
        int next_it = *next(it);
        min_val = min(min_val,next_it-current_it);
        ++it;
    }
    cout << min_val << endl;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        // solve_by_arr(a,n);
        solve_by_multiset(n);
    }
    return 0;
}