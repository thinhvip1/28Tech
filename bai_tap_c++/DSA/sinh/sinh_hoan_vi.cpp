#include <bits/stdc++.h>
using namespace std;
void init(int a[], int n){
    for(int i = 0; i < n; i++) a[i] = i+1;
}
void reverse(int a[], int l, int r){
    while(l < r){
        swap(a[l], a[r]);
        l++; r--;
    }
}
void next(int a[], int n, bool &ok){
    int i = n - 2;
    while(i >= 0 && a[i] > a[i+1]) --i;
    if(i == -1) ok = false;
    else{
        for(int j = n-1; j >= 0; j--){
            if(a[j] > a[i]){
                swap(a[i], a[j]);
                reverse(a, i+1, n-1);
                break;
            }
        }
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        init(a, n);
        bool ok = true;
        while(ok){
            for(int x : a) cout << x;
            cout << " ";
            next(a, n, ok);
        }
        cout << endl;
    }
}