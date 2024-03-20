#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin >> tc;
    int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    while(tc--){
        int n; cin >> n;
        int cnt = 0;
        for(int i = 9; i > -1; i--){
            cnt += (n/a[i]);
            n %= a[i];
        }
        cout << cnt << endl;
    }
}