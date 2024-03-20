#include <bits/stdc++.h>
using namespace std;
//xau chi gom cac chu cai in thuong
int main(){
    char c[1000]; int a[26] = {0};
    // cin.getline(c,1000);
    cin >> c;
    for(int i = 0; i < strlen(c); i++){
        a[c[i]-97]++;
    }
    for(int i = 0; i < 26; i++){
        if(a[i]) cout << (char)(i+97) << " " << a[i] << endl;
    }
}