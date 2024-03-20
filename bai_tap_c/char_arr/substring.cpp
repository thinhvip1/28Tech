#include <bits/stdc++.h>
using namespace std;
char *strstr(char c[], char d[]){
    int n1 = strlen(c),
    n2 = strlen(d);
    if(n2>n1) return nullptr;
    int idx = -1, j = 0;
    for(int i = 0; i < n1; i++){
        if(c[i]==d[j]){
            idx = i;
            j++; i++;
            while(j<n2){
                if(c[i]!=d[j]){
                    j = 0;
                    idx = -1; break;
                }
                ++i; ++j;
            }   
        }
        if(idx!=-1) return c+idx;
    }
    return nullptr;    
}
int main(){
    char c[1000], d[1000];
    cin.getline(c,1000); // nhap chuoi con
    cin.getline(d,1000); // nhap chuoi cha
    char *s = strstr(d,c);
    if(s!=nullptr) cout << "YES\n";
    else cout << "NO\n";
}