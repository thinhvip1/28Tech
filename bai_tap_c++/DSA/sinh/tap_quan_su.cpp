#include <bits/stdc++.h>
using namespace std;
// sap xep roi so sanh xem co bn phan tu giong nhau o ca 2 mang
int same(int a[], int b[], int beg, int k){
    sort(a + beg, a + k);
    sort(b + beg, b + k);
    int cnt = 0;
    int i = 0, j = 0;
    while(i < k && j < k){
        if(a[i] == b[j]){
            cnt++;
            i++; j++;
        }
        else if(a[i] > b[j]) j++;
        else i++;
    }
    return k-cnt;
}
int relax_p(int a[], int n, int k){
    int b[k];
    for(int i = 0; i < k; i++) b[i] = a[i];
    int i = k-1;
    while(i >= 0 && a[i] == n+i+1-k) --i;
    if(i == -1) return k;
    else{
        b[i] = a[i]+1;
        for(int j = i+1; j < k; j++) b[j] = b[j-1] + 1;
    }
    return same(a, b, i, k);
}
// dung set de sap xep + tim kiem
void next(int a[], int n, int k, set<int> se){
    int i = k-1;
    while(i >= 0 && a[i] == n+i+1-k) --i;
    if(i == -1) cout << k << endl;
    else{
        a[i]++;
        for(int j = i+1; j < k; j++) a[j] = a[j-1] + 1;
        int cnt = 0;
        for(int i = 0; i < k; i++){
            if(se.find(a[i]) == se.end()) cnt++;
        }
        cout << cnt << endl;
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, k; cin >> n >> k;
        int a[k];
        set<int> se;
        for(int &x : a){
            cin >> x;
            se.insert(x);
        }
        // next(a, n, k, se);
        cout << relax_p(a, n, k) << endl;
    }
}