#include <bits/stdc++.h>
using namespace std;
void InsertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int tmp = a[i], pos = i-1;
        while(pos>=0 && a[pos]>tmp){
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos+1] = tmp;
    }
}

int solve(int a[], int n){
    InsertionSort(a,n);
    int min = INT_MAX;
    for(int i = 0; i < n-1; i++){
        if(a[i+1]-a[i] < min) min = a[i+1] - a[i];
    }
    return min;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << solve(a,n);
}