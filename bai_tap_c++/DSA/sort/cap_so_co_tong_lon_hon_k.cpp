#include <bits/stdc++.h>
using namespace std;
#define MOD 1e9+7
typedef long long ll;

void InsertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int tmp = a[i], pos = i-1;
        while(pos>=0 && a[pos]>tmp){
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos+1] = tmp;
    }
}
// vi tri dau tien cua phan tu > x
int first_pos(int a[], int l, int r, int x){
    int pos = -1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m]>x){
            pos = m;
            r = m-1;
        }
        else l = m+1;
    }
    return pos;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        InsertionSort(a,n);
        ll ans = 0;
        for(int i = 0; i < n-1; i++){
            // a[i] => a[j] > k-a[i]
            int l = first_pos(a,i+1,n-1,k-a[i]);
            if(l!=-1) ans += (n-l);
        }
        cout << ans << endl;
    }
}