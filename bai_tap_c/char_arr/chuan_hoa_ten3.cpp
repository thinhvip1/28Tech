#include <bits/stdc++.h>
using namespace std;
void strupr1(char c[]){
    for(int i = 0; i < strlen(c); i++)
        c[i] = toupper(c[i]);
}
void strstd(char c[]){
    c[0] = toupper(c[0]);
    for(int i = 1; i < strlen(c); i++)
        c[i] = tolower(c[i]);
}
int main(){
    int tc; cin >> tc;
    // fflush(stdin); // dung fflush(stdin) ko an toan trong viec xoa dem dau vao
    getchar();
    while(tc--){
        char c[1000];
        cin.getline(c,1000);
        char s[20][50];
        int n = 0;
        char *token = strtok(c," ");
        while(token!=nullptr){
            strcpy(s[n++],token);
            token = strtok(nullptr, " ");
        }
        strupr1(s[n-1]);
        cout << s[n-1] << ", ";
        for(int i = 0; i < n-1; i++){
            strstd(s[i]);
            cout << s[i];
            if(i!=n-2) cout << " ";
        }
        cout << endl;
    }
}