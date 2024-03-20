#include <bits/stdc++.h>
using namespace std;
void strlwr1(char c[]){
    for(int i = 0; i < strlen(c); i++)
        c[i] = tolower(c[i]);
}
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        char c[1000];
        cin.getline(c,1000);
        char s[20][50]; int n = 0; 
        char *token = strtok(c," ");
        while(token!=nullptr){
            strcpy(s[n++],token);
            token = strtok(nullptr, " ");
        }
        for(int i = 0; i < n; i++){
            if(i!=n-1){
                s[i][0] = tolower(s[i][0]);
                cout << s[i][0];
            }
            else{
                strlwr1(s[i]);
                cout << s[i] << "@gmail.com\n";
            }
        }
    }
}