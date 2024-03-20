#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int a[], int n){
    for(int i = n-1; i >= 0; i--){
        for(int j = i+1; j < i; j++){
            if(a[j]>a[i]) swap(a[j],a[i]);
        }
    }
}

int solve(int a[], int n){
    BubbleSort(a,n);
    int ans = 1, docung = a[n-1];
    for(int i = n-2; i >= 0; i--){
        if(docung>0){
            ans++;
            docung = min(docung-1,a[i]);
        }
        else break;
    }
    return ans;
}
int main(){
    int n; cin >> n; 
    int a[n];
    for(int &x : a) cin >> x;
    cout << solve(a,n);
}