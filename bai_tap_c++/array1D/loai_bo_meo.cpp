#include <bits/stdc++.h>
using namespace std;
// loai bo cac con meo ngoai cung cua day sao cho cac con meo con lai cung mau nhau. 
//Moi lan loai 1 con. Dem so lan it nhat can loai.
int subarr(int a[], int n){
    int res = 1, cnt = 1;;
    for(int i = 0; i < n-1; i++){
        if(a[i]==a[i+1]) ++cnt;
        else{
            res = (res<cnt) ? cnt : res;
            cnt = 1;
        }
    }
    return res;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        for(auto &x : a) cin >> x;
        cout << n - subarr(a,n) << endl;
    }
}