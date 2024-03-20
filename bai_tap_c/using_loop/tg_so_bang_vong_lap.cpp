#include <bits/stdc++.h>
using namespace std;
void tg1(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++) cout << j;
        cout << endl;
    }
}
void tg2(int n){
    for(int i = 1; i <= n; i++){
        int tmp = i;
        for(int j = 1; j <= i; j++){
            cout << tmp << " ";
            tmp += n-j;
        }
        cout << endl;
    }
}
void tg3(int n){
    for(int i = 1; i <= n; i++){
        int cnt = 2;
        for(int j = 1; j <= n-1+i; j++){
            if(j<=n-i) cout << "~";
            else if(j<n){
                cout << cnt; cnt+=2;
            }
            else{
                cout << cnt; cnt-=2;
            }
        }
        cout << endl;
    }
}
void tg4(int n){
    int cnt = 1, tmp;
    for(int i = 1; i <= n; i++){
        if(!(i&1)){
            cnt += i;
            tmp = cnt-1;
        }
        for(int j = 1; j <= i; j++){
            if(i&1) cout << cnt++ << " ";
            else cout << tmp-- << " ";
        }
        cout << endl;
    }
}
void tg4_p2(int n){
    for(int i = 1; i <= n; i++){
        int cnt = i*(i+1)/2;
        for(int j = i; j >= 1; j--){
            if(!(i&1)) cout << cnt-- << " ";
            else cout << cnt - j + 1 << " "; 
        }
        cout << endl;
    }
}
void tg5(int n){
    int cnt = 1, add = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << cnt << " ";
            cnt += add++;
        }
        cout << endl;
    }
}
int main(){
    int n; cin >> n;
    // tg1(n);
    // tg2(n);
    // tg3(n);
    // tg4(n); cout << endl;
    // tg4_p2(n);
    tg5(n);
}