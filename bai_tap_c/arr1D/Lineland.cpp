#include <bits/stdc++.h>

using namespace std;

int min(int a, int b){
    if(a>b) return b;
    return a;
}

int max(int a, int b){
    if(a>b) return a;
    return b;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        if(i==0) cout << a[i+1] - a[i] << " " << a[n-1] - a[i] << endl;
        else if(i == n-1) cout << a[i] - a[i-1] << " " << a[i] - a[0] << endl;
        else cout << min(a[i+1]-a[i], a[i]-a[i-1]) << " " << max(a[n-1]-a[i],a[i]-a[0]) << endl;
    }
    return 0;
}