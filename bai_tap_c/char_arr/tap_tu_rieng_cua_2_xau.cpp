#include <bits/stdc++.h>
using namespace std;
// cac tu chi xh o xau 1 ko xh o xau2
int cmp(const void *a, const void *b){
    char *x = (char*) a;
    char *y = (char*) b;
    if(strcmp(x,y)<1) return -1;
    return 1;
}
int main(){
    char c[1000], d[1000];
    cin.getline(c,1000);
    cin.getline(d,1000);
    char s1[100][100], s2[100][100];
    int n1 = 0, n2 = 0;
    char *token = strtok(c," ");
    while(token!=nullptr){
        strcpy(s1[n1++],token);
        token = strtok(nullptr, " ");
    }
    token = strtok(d," ");
    while(token!=nullptr){
        strcpy(s2[n2++],token);
        token = strtok(nullptr, " ");
    }
    qsort(s1,n1,sizeof(s1[0]),cmp);
    int n3 = 0;
    for(int i = 0; i < n1; i++){
        bool flag = true;
        while(i<n1-1 && strcmp(s1[i],s1[i+1])==0) ++i;
        for(int j = 0; j < n2; j++){
            if(strcmp(s1[i],s2[j])==0){
                flag = false; break;
            }
        }
        if(flag) strcpy(s1[n3++],s1[i]);
    }
    for(int i = 0; i < n3; i++){
        cout << s1[i];
        if(i!=n3-1) cout << " ";
    }
}