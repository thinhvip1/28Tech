#include <bits/stdc++.h>
using namespace std;
int min(int a, int b){
    return a > b ? b : a;
}
int max(int a, int b){
    return a > b ? a : b;
}
void selectionSort(int a[], int l, int r){
    for(int i = l; i <= r; i++){
        int m = i;
        for(int j = i+1; j <= r; j++){
            if(a[m]>a[j]) m = j;
        }
        if(m!=i){
            int tmp = a[i];
            a[i] = a[m];
            a[m] = tmp;
        }
    }
}
map<int,bool>p;
bool check(int a[], int n){
    for(int i = 0; i < n; i++){
        int index = i;
        while(index<n && p[index]) ++index;
        // sort [i,idx]
        selectionSort(a,i,index);
        i = index;
    }
    for(int i = 0; i < n-1; i++){
        if(a[i+1]<a[i]) return false;
    }
    return true;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, m; cin >> n >> m;
        int a[n];
        for(int &x : a) cin >> x;
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            p[x-1] = true;
        }
        if(check(a,n*)) cout << "YES\n";
        else cout << "NO\n";
        p.clear();
    }
}