#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) a[i] = n-i;
        do{
            for(int x : a) cout << x;
            cout << " ";
        }while(prev_permutation(a, a+n));
        cout << endl;
    }
}