#include <bits/stdc++.h>
using namespace std;
int Partition_Lomuto(int a[], int l, int r){
    int i = l-1, pivot = a[r];
    for(int j = l; j < r; j++){
        if(a[j] <= pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    i++;
    swap(a[i],a[r]);
    return i;
}
void QuickSort_Lomuto(int a[], int l, int r){
    if(l>=r) return;
    int p = Partition_Lomuto(a,l,r);
    QuickSort_Lomuto(a,l,p-1);
    QuickSort_Lomuto(a,p+1,r);
}
int solve(int a[], int n){
    int ans = 0;
    for(int i = n-1; i >= 0; i--){
        a[i] -= (n-1-i);
        if(a[i]>0) ans += a[i];
        else break;
    }
    return ans;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    QuickSort_Lomuto(a,0,n-1);
    cout << solve(a,n);
}