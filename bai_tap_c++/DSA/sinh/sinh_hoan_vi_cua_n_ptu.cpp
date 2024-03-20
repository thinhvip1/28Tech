#include <bits/stdc++.h>
using namespace std;

int n, a[100];
bool ok = true;
void insert_sort(int a[], int l, int r){
    for(int i = l; i < r; i++){
        int tmp = a[i], j = i-1;
        while(j >= l && tmp < a[j]){
            a[j+1] = a[j];
            --j;
        }
        a[j+1] = tmp;
    }
}
void reverse(int a[], int l, int r){
    while(l < r){
        swap(a[l], a[r]);
        l++;
        r--;
    }
}
void init(){
    for(int i = 0; i < n; i++) a[i] = i+1;
}
void sinh(){
    int i = n-2;
    while(i >= 0 && a[i] > a[i+1]) --i;
    if(i == -1) ok = false;
    else{
        int j = n-1;
        while(a[j] < a[i] ) j--;
        swap(a[i], a[j]);
        reverse(a, i+1, n-1);
    }
}
int main(){ 
    cin >> n;
    init();
    int cnt = 0;
    while(ok){
        cnt++;
        for(int i = 0; i < n; i++) cout << a[i];
        cout << endl;
        sinh();
    }
    cout << n << "! = " << cnt;
    return 0;
}