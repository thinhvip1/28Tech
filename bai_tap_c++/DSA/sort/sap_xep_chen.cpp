#include <bits/stdc++.h>
using namespace std;
void InsertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int tmp = a[i], pos = i-1;
        while(pos>=0 && a[pos]>tmp){
            a[pos+1] = a[pos];
            pos--;
        }
        cout << tmp << " " << pos+1 << endl;
        a[pos+1] = tmp;
    } 
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    InsertionSort(a,n);
    // for(int x : a) cout << x << " ";
}