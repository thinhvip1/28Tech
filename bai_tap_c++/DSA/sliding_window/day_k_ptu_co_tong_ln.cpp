#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    long long sum = 0;
    for(int i = 0; i < k; i++){
        sum += a[i];
    }
    long long max_s = sum, idx=0;
    for(int i = 1; i < n-k+1; i++){
        sum += a[i+k-1] - a[i-1];
        if(sum >= max_s){
            max_s = sum;
            idx = i;
        } 
    }
    cout << max_s << endl;
    for(int i = 0; i < k; i++){
        cout << a[i+idx] << " ";
    }
}