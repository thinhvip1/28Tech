#include <bits/stdc++.h>
using namespace std;
int main(){
    char c[1000];
    cin.getline(c,1000);
    int cnt = 0;
    char *tok = strtok(c," ");
    while(tok!=nullptr){
        cnt++;
        tok = strtok(nullptr," ");
    }
    cout << cnt;
}