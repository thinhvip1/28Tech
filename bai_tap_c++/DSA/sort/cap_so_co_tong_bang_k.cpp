#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int binary_search(int a[], int l, int r, int x){
    while(l<=r){
        int m = (l+r)/2;
        if(a[m]==x) return 1;
        if(a[m] < x) l = m+1;
        else r = m-1;
    }
    return -1;
}
int first_pos(int a[], int l, int r, int x){
    int pos = -1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m]==x){
            pos = m;
            r = m-1;
        }
        else if(a[m] > x) r = m-1;
        else l = m+1;
    }
    return pos;
}
int last_pos(int a[], int l, int r, int x){
    int pos = -1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m]==x){
            pos = m;
            l = m+1;
        }
        else if(a[m] > x) r = m-1;
        else l = m+1;
    }
    return pos;
}
void InsertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int tmp = a[i], pos = i-1;
        while(pos>=0 && a[pos] > tmp){
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos+1] = tmp;
    }
}
void SelectionSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        int m = i;
        for(int j = i+1; j < n; j++){
            if(a[m] > a[j]) m = j;
        }
        swap(a[i],a[m]);
    }
}
void BubbleSort(int a[], int n){
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            if(a[j] > a[j+1]) swap(a[j],a[j+1]);
        }
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, k; cin >> n >> k;
        int a[n];
        // map<int,int> mp;
        // for(int i = 0; i < n; i++){
        //     cin >> a[i];
        //     mp[a[i]]++;
        // }
        for(int &x : a) cin >> x;
        ll ans = 0;
        // for(int i = 0; i < n; i++){
        //     ans += mp[k-a[i]];
        //     if(a[i] * 2 == k) --ans;
        // }
        // cout << ans/2 << endl;
        // InsertionSort(a,n);
        // SelectionSort(a,n);
        BubbleSort(a,n);
        for(int i = 0; i < n-1; i++){
            // a[i] -> k-a[i]
            int l = first_pos(a, i+1, n-1, k-a[i]);
            int r = last_pos(a, i+1, n-1, k-a[i]);
            if(l != -1) ans += (r-l + 1);
        }
        cout << ans << endl;
    }
}