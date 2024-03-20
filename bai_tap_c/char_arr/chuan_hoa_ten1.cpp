#include <bits/stdc++.h>
using namespace std;
char* stdstr(char c[]){
    c[0] = toupper(c[0]);
    for(int i = 1; i < strlen(c); i++){
        c[i] = tolower(c[i]);
    }
    return c;
}
int main(){
    int tc; cin >> tc;
    getchar();
    while(tc--){
        char c[1000];
        cin.getline(c,1000);
        char *token = strtok(c," ");
        while(token!=nullptr){
            token = stdstr(token);
            cout << token << " ";
            token = strtok(nullptr, " ");
        }
        cout << endl;
    }
}