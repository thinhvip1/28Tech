#include <bits/stdc++.h>
using namespace std;
int main(){
    char c[1000], d[1000]; bool check[58] = {false};
    cin.getline(c,1000);
    cin.getline(d,1000);
    for(int i = 0; i < strlen(c); i++){
        check[c[i]-65] = true;
    }
    for(int i = 0; i < strlen(d); i++){
        check[d[i]-65] = true;
    }
    for(int i = 0; i < 58; i++){
        if(check[i]){
            cout << (char)(i+65);
            check[i] = false;
        }
    }
}