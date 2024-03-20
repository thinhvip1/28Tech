#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a, const void *b){
    int *x = (int*) a;
    int *y = (int*) b;
    if(*x < *y) return -1;
    else return 1;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        qsort(a,n,sizeof(int),cmp);
        if(n&1) cout << a[n/2] << endl;
        else cout << a[n/2-1] << endl;
    }
}