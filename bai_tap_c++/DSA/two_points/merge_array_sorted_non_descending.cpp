#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int b[], int n, int m){
    int i = 0, j = 0;
    while(i < n && j < m){
        if(a[i] <= b[j]){
            cout << a[i] << " ";
            i++;
        }
        else{
            cout << b[j] << " ";
            j++;
        }
    }
    while(i < n) cout << a[i++] << " ";
    while(j < m) cout << b[j++] << " ";
}
int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    merge(a, b, n, m);
}