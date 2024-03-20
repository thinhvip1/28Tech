#include <bits/stdc++.h>
using namespace std;
// khoi tao cau hinh dau tien
void init(int a[], int n, int k){
    for(int i = 0; i < k; i++)
        a[i] = i+1;
}
void next(int a[], int n, int k, bool &ok){
    int i = k-1;
    while(i >= 0 && a[i] == n+i+1-k) --i;
    // cau hinh cuoi cung
    if(i == -1) ok = false;
    // sinh cau hinh tiep theo
    else{
        a[i]++;
        for(int j = i+1; j < k; j++) a[j] = a[j-1] + 1;
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, k; cin >> n >> k;
        int a[k];
        init(a, n, k);
        bool ok = true;
        while(ok){
            for(int i = 0; i < k; i++){
                cout << a[i];
            }
            cout << " ";
            next(a, n, k, ok);
        }
        cout << endl;
    }
}