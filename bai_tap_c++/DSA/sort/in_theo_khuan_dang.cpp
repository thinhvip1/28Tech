#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a, const void *b){
    return (*(int*) a - *(int*) b);
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        qsort(a,n,sizeof(int),cmp);
        int l = 0, r = n-1;
        while(l<r){
            cout << a[r] << " " << a[l] << " ";
            r--; l++;
        }
        if(l==r) cout << a[l];
        cout << endl;
    }
}