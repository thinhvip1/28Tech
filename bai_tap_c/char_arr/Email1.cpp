#include <bits/stdc++.h>
using namespace std;
void stdstr(char c[]){
    for(int i = 0; i < strlen(c); i++)
        c[i] = tolower(c[i]);
}
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        char c[1000];
        cin.getline(c,1000);
        char s[20][50];
        int n = 0;
        char *token = strtok(c," ");
        while(token!=nullptr){
            strcpy(s[n++],token);
            token = strtok(nullptr," ");
        }
        stdstr(s[n-1]);
        cout << s[n-1];
        for(int i = 0; i < n-1; i++){
            s[i][0] = tolower(s[i][0]);
            cout << s[i][0];
        }
        cout << "@gmail.com\n";
    }
}