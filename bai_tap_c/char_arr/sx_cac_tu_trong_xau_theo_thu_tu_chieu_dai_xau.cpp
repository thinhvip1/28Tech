#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a, const void *b){
    char *x = (char*) a;
    char *y = (char*) b;
    if(strlen(x)<strlen(y)) return -1;
    if(strlen(x)>strlen(y)) return 1;
    if(strcmp(x,y)<1) return -1;
    return 1;
}
int main(){
    int tc; cin >> tc;
    getchar();
    while(tc--){
        char c[1000];
        cin.getline(c,1000);
        char *token = strtok(c," ");
        int n = 0;
        char s[20][50];
        while(token!=nullptr){
            strcpy(s[n++],token);
            token = strtok(nullptr," ");
        }
        qsort(s,n,sizeof(s[0]),cmp);
        for(int i = 0; i < n; i++) cout << s[i] << " ";
        cout << endl;
    }
}