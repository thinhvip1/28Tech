#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin >> tc; cin.ignore();
    for(int i = 1; i <= tc; i++){
        cout << "#Test " << i << ": ";
        char c[1000];
        cin.getline(c,1000);
        char s[20][50]; int n=0;
        char *token = strtok(c," ");
        bool flag = true;
        while(token!=nullptr){
            strcpy(s[n++],token);
            for(int j = 0; j < n-1; j++)
                if(strcmp(s[j],token)==0){
                    cout << token << endl;
                    flag = false; break;
                }
            if(!flag) break;
            token = strtok(nullptr, " ");
        }
        if(flag) cout << "-1" << endl;
    }
}