#include <bits/stdc++.h>
using namespace std;
void strlwr1(char c[]){
    for(int i = 0; i < strlen(c); i++)
        if(isalpha(c[i])) c[i] = tolower(c[i]);
}
int main(){
    char c[1000];
    cin.getline(c,1000);
    strlwr1(c);
    char s[20][50];
    char *token = strtok(c," ");
    int n = 0;
    int a[20]={0};
    while(token!=nullptr){
        bool flag = true;
        for(int i = 0; i < n; i++){
            if(strcmp(s[i],token)==0){
                a[i]++;
                flag = false;
            }
        }
        if(flag){
            strcpy(s[n],token); a[n++] = 1;
        }
        token = strtok(nullptr," ");
    }
    for(int i = 0; i < n; i++){
        cout << s[i] << " " << a[i] << endl;
    }
}