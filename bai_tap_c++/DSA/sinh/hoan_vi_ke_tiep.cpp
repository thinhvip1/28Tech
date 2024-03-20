#include <bits/stdc++.h>
using namespace std;
// cách 1: dùng next_permutation

void next1(int a[], int n){
    if(next_permutation(a, a+n)){
        for(int i = 0; i < n; i++) cout << a[i] << " ";
    }
    else{
        for(int i = 0; i < n; i++) cout << i + 1 << " ";
    }
    cout << endl;
}

//cach 2: Tự viết hàm
void reverse(int a[], int l, int r){
    while(l < r){
        swap(a[l], a[r]);
        l++;
        r--;
    }
}
void next(int a[], int n){
    int i = n-2;
    while(i >= 0 && a[i] > a[i+1]) --i;
    if(i == -1)
        for(int j = n-1; j >= 0; j--) cout << a[j] << " ";
    else{
        for(int j = n-1; j >= 0; j--){
            if(a[j] > a[i]){
                swap(a[i], a[j]);
                reverse(a, i+1, n-1);
                break;
            }
        }
        for(int i = 0; i < n; i++) cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        // next(a, n);
        next1(a, n);
    }
}