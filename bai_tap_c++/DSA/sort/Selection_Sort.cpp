#include <bits/stdc++.h>
using namespace std;
void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}
void SelectionSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        int m = i;
        for(int j=i+1; j < n; j++){
            if(a[m]>a[j]) m = j;
        }   
        swap(a[m],a[i]);     
    }
}
int main(){
    int n;cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    SelectionSort(a,n);
    for(int x : a) cout << x << " ";
}