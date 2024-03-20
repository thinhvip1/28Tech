#include <bits/stdc++.h>
using namespace std;
int main(){
    char c[1000]; int cnt1 = 0, cnt2 = 0;
    cin.getline(c,1000);
    for(int i = 0; i < strlen(c); i++){
        if((c[i]>=65&&c[i]<=90)||(c[i]>=97&&c[i]<=122)) cnt1++; 
        else if(c[i]>=48&&c[i]<=57) cnt2++; 
    }
    cout << cnt1 << " " << cnt2 << " " << strlen(c)-cnt1-cnt2;
}