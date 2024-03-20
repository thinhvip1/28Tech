#include <bits/stdc++.h>
using namespace std;
// #define ll long long;
// using ll long long;
int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}
void selectionSort(long long a[], int n){
    for(int i = 0; i < n; i++){
        int m = i;
        for(int j = i + 1; j < n-1; j++){
            if(a[j] < a[m]) m = j;
        }
        if(i!=m){
            long long tmp = a[i];
            a[i] = a[m];
            a[m] = tmp;
        }
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            a[i] = 1ll * x*x;
        }
        // qsort(a,n,sizeof(int),cmp);
        selectionSort(a,n);
        int l = 0, r = n-2;
        bool ok = false;
        for(int i = n-1; i > 1; i--){
            while(l<r){
                if(a[l] + a[r] == a[i]){
                    ok = true; break;
                }
                else if(a[l]+a[r] > a[i]){
                    r--;
                }
                else l++;
            }
            if(ok) break;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}