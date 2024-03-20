#include <bits/stdc++.h>
using namespace std;
int main(){
    char c[1000];
    cin.getline(c,1000);
    char s[20][50];
    int n = 0;
    char *token = strtok(c," ");
    while(token != nullptr){
        strcpy(s[n++],token);
        token = strtok(nullptr," ");
    }
    cout << s[0] << " ";
    for(int i = 1; i < n; i++){
        bool flag = true;
        for(int j = 0; j < i; j++){
            if(strcmp(s[i],s[j])==0){
                flag = false; break;
            }
        }
        if(flag) cout << s[i] << " ";
    }
}