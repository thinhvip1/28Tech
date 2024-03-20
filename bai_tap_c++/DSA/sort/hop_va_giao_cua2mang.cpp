#include <bits/stdc++.h>
using namespace std;
void hop(int a[], int b[], int n, int m){
    int i = 0, j = 0;
    while(i<n && j<m){
        if(a[i] == b[j]){
            cout << a[i] << " ";
            i++; j++;
        }
        else if(a[i] < b[j]){
            cout << a[i] << " ";
            i++;
        }
        else if(a[i] > b[j]){
            cout << b[j] << " ";
            j++;
        }
    }
    while(i<n){
        cout << a[i] << " ";
        i++;
    }
    while(j<m){
        cout << b[j] << " ";
        j++;
    }
}

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    // hop(a,b,n,m);
    int h[n+m], g[n+m];
    int i = 0, j = 0, cnt1 = 0, cnt2 = 0;
    while(i < n && j < m){
        if(a[i]==b[j]){
            h[cnt1++] = a[i];
            g[cnt2++] = a[i];
            i++; j++;
        }
        else if(a[i] < b[j]){
            h[cnt1++] = a[i];
            i++;
        }
        else{
            h[cnt1++] = b[j];
            j++;
        }
    }
    while(i<n){
        h[cnt1++] = a[i];
        i++;
    }
    while(j<m){
        h[cnt1++] = b[j];
        j++;
    }
    for(int i = 0; i < cnt1; i++) cout << h[i] << " ";
    cout << endl;
    for(int i = 0; i < cnt2; i++) cout << g[i] << " " ;
    cout << endl;
}