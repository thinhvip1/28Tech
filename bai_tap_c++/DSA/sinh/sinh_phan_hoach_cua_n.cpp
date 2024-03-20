#include <bits/stdc++.h>
using namespace std;
int n, a[100], ok = true, cnt;
void init(){
    cnt = 1;
    a[1] = n;
}
void sinh(){
    int i = cnt;
    while(i >= 1 && a[i] == 1) --i;
    if(i == 0) ok = false;
    else{
        a[i]--;
        int thieu = cnt - i + 1;
        cnt = i;
        int q = thieu / a[i];
        int r = thieu % a[i];
        if(q)
            for(int j = 1; j <= q; j++){
                a[++cnt] = a[i];
            }
        if(r)
            a[++cnt] = r;
    }
}
int main(){
    cin >> n;
    init();
    while(ok){
        for(int i = 1; i <= cnt; i++) cout << a[i] << " ";
        cout << endl;
        sinh();
    }
}