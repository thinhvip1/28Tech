#include <bits/stdc++.h>
using namespace std;
bool check(char c[]){
    for(int i = 0; i < strlen(c); i++){
        if(!isupper(c[i])) return false;
    }
    return true;
}
int main(){
    int tc; cin >> tc;
    // fflush(stdin);
    getchar();
    while(tc--){
        char c[1000];
        cin.getline(c,1000);
        char *token = strtok(c," ");
        while(token!=nullptr){
            if(check(token)) cout << token << " ";
            token = strtok(nullptr," ");
        }
        cout << endl;
    }
}