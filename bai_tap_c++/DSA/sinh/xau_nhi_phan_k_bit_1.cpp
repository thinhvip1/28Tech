#include <bits/stdc++.h>
using namespace std;
void init(int a[], int n, int k){
    for(int i = 0; i < n; i++){
        if(i < n-k) a[i] = 0;
        else a[i] = 1;
    }
}
void next(int a[], int n, int k, bool &ok){
    int i = n-1;
    while(i >= 0 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == -1) 
        ok = false;
    else
        a[i] = 1;
}
bool check(int a[], int n, int k){
    int cnt = 0;
    for(int i = 0; i < n; i++)
        if(a[i]==1) cnt++;
    return cnt == k;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, k; cin >> n >> k;
        int a[n];
        init(a, n, k);
        bool ok = true;
        while(ok){
            if(check(a, n, k)){
                for(int x : a) cout << x;
                cout << endl;
            }
            next(a, n, k, ok);
        }
    }
}