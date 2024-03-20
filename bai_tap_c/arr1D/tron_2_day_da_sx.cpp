#include <bits/stdc++.h>
using namespace std;
void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}
int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m], c[n+m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int i = 0, j = 0;
    for(int h = 0; h < n+m; h++){      
        if(i<n && j<m){
            if(a[i] <= b[j])
                c[h] = a[i++];
            else
                c[h] = b[j++];
        }
        else if(i==n) c[h] = b[j++];
        else if(j==m) c[h] = a[i++];
    }
    for(int x : c) cout << x << " ";
}
