#include <bits/stdc++.h>
using namespace std;
void swap(char c[], char d[]){
    char tmp[100];
    strcpy(tmp,c);
    strcpy(c,d);
    strcpy(d,tmp);
}
int min(int a, int b){
    return a > b ? b : a;
}
int strcmp(char c[], char d[]){
    int n1 = strlen(c);
    int n2= strlen(d);
    for(int i = 0; i < min(n1,n2); i++){
        if(c[i]>d[i]) return 1;
        else if(c[i]<d[i]) return -1;
    }
    if(n1==n2) return 0;
    if(n1>n2) return 1;
    return -1;
}
void selectionSort(char s[][50], int n){
    for(int i = 0; i < n-1; i++){
        int m = i;
        for(int j = i+1; j < n; j++)
            if(strcmp(s[m],s[j])==1) m = j;
        if(m!=i) swap(s[m],s[i]);
    }
}
int cmp(const void *a, const void *b){
    char *x = (char*) a;
    char *y = (char*) b;
    if(strcmp(x,y)<1) return -1;
    return 1;
}
int main(){
    int tc; cin >> tc;
    fflush(stdin);
    while(tc--){
        char c[1000];
        cin.getline(c,1000);
        char s[20][50];
        int n = 0; // dem so luong tu trong cau
        char *token = strtok(c," ");
        while(token!=nullptr){
            strcpy(s[n++],token);
            token = strtok(nullptr," ");
        }
        // selectionSort(s,n);
        qsort(s,n,sizeof(s[0]),cmp);
        for(int i = 0; i < n; i++){
            cout << s[i] << " ";
        }
        cout << endl;
    }
}