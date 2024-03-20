#include <bits/stdc++.h>
using namespace std;
int main(){
    char c[1000]; bool check[26] = {false};
    cin.getline(c,1000);
    for(int i = 0; i < strlen(c); i++){
        check[c[i]-97]=true;
    }
    bool flag = true;
    for(int i = 0; i < 26; i++){
        if(!check[i]){
            flag = false; break;
        }
    }
    if(flag) cout << "YES";
    else cout << "NO";
}