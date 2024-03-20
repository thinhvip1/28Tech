#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a, const void *b){
    char *x = (char*) a;
    char *y = (char*) b;
    if(*x > *y) return 1;
    return -1;
}
int main(){
    int tc; cin >> tc;
    getchar();
    while(tc--){
        char c[1000];
        cin.getline(c,1000);
        qsort(c,strlen(c),sizeof(c[0]),cmp);
        // for(int i = 0; i < strlen(c); i++) cout << c[i];
        cout << c;
        cout << endl;
    }
}