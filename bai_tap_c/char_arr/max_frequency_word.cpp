#include <bits/stdc++.h>
using namespace std;
void strlwr1(char c[]){
    for(int i = 0; i < strlen(c); i++)
        if(isalpha(c[i])) c[i] = tolower(c[i]);
}
// int cmp(const void *a, const void *b){
//     char* x = (char*) a;
//     char *y = (char*) b;
//     if(strcmp(x,y)<1) return -1;
//     return 1;
// }
int main(){
    char c[1000];
    cin.getline(c,1000);
    strlwr1(c);
    char s[20][50];
    int n = 0;
    char *token = strtok(c," ");
    while(token!=nullptr){
        strcpy(s[n++],token);
        token =strtok(nullptr," ");
    }
    // qsort(s,n,sizeof(s[0]),cmp);
    // int cnt = 1, max = 0, idx;
    // for(int i = 0; i < n; i++){
    //     while(i<n-1 && strcmp(s[i],s[i+1])==0){
    //         ++i; cnt++;
    //     }
    //     if(max < cnt){
    //         idx = i;
    //         max = cnt;
    //     }
    //     cnt = 1;
    // }
    int max = 0, idx;
    for(int i = 0; i < n; i++){
        int cnt = 1;
        for(int j = i+1; j < n; j++){
            if(strcmp(s[i],s[j])==0) cnt++;
        }
        if(max < cnt){
            max = cnt; idx = i;
        }
        else if(max==cnt){
            if(strcmp(s[idx],s[i])==1)
                idx = i;
        }
    }
    cout << s[idx] << " " << max;
}