#include <bits/stdc++.h>
using namespace std;
int sumcs(int n){
    int res = 0;
    while(n){
        res += (n%10);
        n /=10;
    }
    return res;
}
int cmp1(const void *a, const void *b){
    int *x = (int*) a;
    int *y = (int*) b;
    if(sumcs(*x)!=sumcs(*y)) return sumcs(*x)-sumcs(*y);
    if(*x < *y) return 1;
    return -1;
}
int cmp2(const void *a, const void *b){
    int *x = (int*) a;
    int *y = (int*) b;
    if(*x%2==0 && *y%2==1) return -1;
    if(*x%2==1 && *y%2==0) return 1;
    if(*x%2==0 && *y%2==0) return *y - *x;
    if(*x%2==1 && *y%2==1) return *x - *y;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(auto &x : a) cin >> x;
    qsort(a,n,sizeof(int),cmp2);
    for(int x : a) cout << x << " ";
}