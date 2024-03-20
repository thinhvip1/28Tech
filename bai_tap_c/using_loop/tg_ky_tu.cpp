#include <bits/stdc++.h>
using namespace std;
void tg1(int n){
    for(int i = 1; i <= n; i++){
        if(i&1){
            int cnt = i*(i+1)/2-i+1;
            for(int j = 1; j <= i; j++) cout << (char)(96+cnt++) << " ";
        }
        else{
            int cnt = i*(i+1)/2;
            for(int j = 1; j <= i; j++) cout << (char)(96+cnt--) << " ";
        }
        cout << endl;
    }
}
void tg2(int n){
    for(int i = 1; i <= n; i++){
        int init = 0;
        for(int j = 1; j <= 2*i-1; j++){
            if(j<i){
                cout << (char)(init+64);
                init += 2;
            }
            else{
                cout << (char)(init+64);
                init -= 2;
            }
        }
        cout << endl;
    }
}
void tg3(int n){
    for(int i = n; i >= 1; i--){
        int init = (n-i+1)*2-1;
        for(int j = 1; j <= i; j++){
            cout << (char)(64+init);
            init += 2;
        }
        cout << endl;
    }
}
void tg4(int n){
    for(int i = n; i >= 1; i--){
        int init = i-1;
        for(int j = 1; j <= i; j++){
            cout << (char)(64+init++);
        }
        cout << endl;
    }
}
void tg5(int n){
    for(int i = 1; i <= n; i++){
        int init = i;
        for(int j = 1; j <= n+i-1; j++){
            if(j <= n-i) cout << " ";
            else{
                if(j < n) cout << (char)(64+init--) << " ";
                else cout << (char)(64+init++) << " ";
            }
        }
            cout << endl;
    }
}
void tg6(int n){
    int cnt = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(cnt&1) cout << (char)(96+cnt++);
            else cout << (char)(64+cnt++);
        }
        cout << endl;
    }
}
int main(){
    int n; cin >> n;
    // tg1(n);
    // tg2(n);
    // tg3(n);
    // tg4(n);
    // tg5(n);
    tg6(n);
}