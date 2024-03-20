#include <bits/stdc++.h>

using namespace std;

int main(){
    int TC; cin >> TC;
    while(TC--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        int sum = 0, idx = 0;
        for(int i = 0; i < k; i++){
            sum += a[i];
        }
        int res = sum;
        for(int i = k; i < n; i++){
            sum = sum - a[i-k] + a[i];
            if(res < sum){
                idx = i - k + 1;
                res = sum;
            }
        }
        cout << res << endl;
        for(int j = 0; j < k; j++) cout << a[j + idx] << " ";
        cout << endl;
    }
}