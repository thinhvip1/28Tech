#include <bits/stdc++.h>
using namespace std;
bool symmetry(char c[]){
    int l = 0, r = strlen(c)-1;
    while(l<r){
        if(c[l++]!=c[r--]) return false;
    }
    return true;
}
int main(){
    char  c[1000];
    cin.getline(c,1000);
    if(symmetry(c)) cout << "YES";
    else cout << "NO";
}