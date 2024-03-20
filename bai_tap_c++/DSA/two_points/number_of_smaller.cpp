#include <bits/stdc++.h>
using namespace std;

// tại mỗi phần tử ở mảng 2, tìm số phần tử nhỏ hơn ở mảng 1
void solve(int a[], int b[], int n, int m){
    int i = 0;
    /* for(int j = 0; j < m; j++){
        while(a[i] < b[j]) i++;
        cout << i << " ";
    } */
    int j = 0;
    while(i < n && j < m){
        if(a[i] < b[j]) ++i;
        else{
            cout << i << " ";
            j++;
        }
    }
    // duyệt hết phần tử ở mảng 1 mà mảng 2 vẫn chưa duyệt hết: 
    // tức là tất cả các phần tử còn lại ở mảng 2 đều lớn hơn các phần tử ở mảng 1
    while(j < m){
        cout << n << " ";
        j++;
    }
}
int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    solve(a, b, n, m);
}