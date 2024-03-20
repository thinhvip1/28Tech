#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a, const void *b){
    char x[50], y[50], z[50], t[50];
    strcpy(x,(char*) a); strcpy(z,x);
    strcpy(y,(char*) b); strcpy(t,y);
    strcat(x,t);
    strcat(y,z);
    // return strcmp(x,y);
    if(strcmp(x,y)<0) return -1;
    return 1;
}
void solve(char s[][50], int n){
    qsort(s,n,sizeof(s[0]),cmp);
    for(int i = 0; i < n; i++) cout << s[i];
    cout << endl;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        char c[n][50];
        for(int i = 0; i < n; i++){
            cin >> c[i];
        }
        solve(c,n);
    }
}