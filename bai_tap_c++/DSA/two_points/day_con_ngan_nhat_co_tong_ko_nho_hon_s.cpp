#include <bits/stdc++.h>
using namespace std;

int shortest_segment(int a[], int n, int s){
    int l = 0, r = 0, res = (int)(1e9), sum = 0;
    for( ; r < n; r++){
        sum += a[r];
        while(sum >= s){
            res = min(res, r-l+1);
            sum -= a[l];
            l++;
        }
    }
    if(res == (int)(1e9)) return -1;
    return res;
}
int main(){
    int n, s; cin >> n >> s;
    int a[n];
    for(int &x : a) cin >> x;
    cout << shortest_segment(a, n, s);
}