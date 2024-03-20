#include <bits/stdc++.h>
using namespace std;
void next(int a[], int n, int k){
    int i = k-1;
    while(a[i] == n+i+1-k && i >= 0) --i;
    // nếu là cấu hình cuối cùng thì in ra cấu hình đầu tiên 3 4 5 -> 1 2 3
    if(i == -1){
        for(int j = 0; j < k; j++) cout << j+1 << " ";
    }
    else{
        a[i]++;
        for(int j = i+1; j < k; j++) a[j] = a[j-1] + 1;
        for(int j = 0; j < k; j++) cout << a[j] << " ";
        // for(int j = 0; j < k; j++){
        //     if(j <= i) cout << a[j] << " ";
        //     else cout << ++a[i] << " ";
        // }
    }
    cout << endl;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, k; cin >> n >> k;
        int a[k];
        for(int i = 0; i < k; i++) cin >> a[i];
        next(a, n, k);
    }
}