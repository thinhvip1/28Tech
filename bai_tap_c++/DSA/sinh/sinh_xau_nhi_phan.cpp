#include <bits/stdc++.h>
using namespace std;
int n, k, a[100];
bool ok;
void init(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}
void sinh(){
    // tim bit 0 trong xau
    int i = n, cnt = 0;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        cnt++;
        --i;
    }
    if(i==0){
        ok = false;
    }
    else a[i] = 1;
}
int main(){
    cin >> n;
    ok = true;
    init();
    while(ok){
        for(int i = 1; i <= n; i++) cout << a[i];
        cout << endl;
        sinh();
    }
}