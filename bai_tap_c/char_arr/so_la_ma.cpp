#include <bits/stdc++.h>
using namespace std;
// int lm[24];
// void set_lm(){
//     lm['I'-65]=1;   lm['V'-65]=5;
//     lm['X'-65]=10;  lm['L'-65]=50;
//     lm['C'-65]=100; lm['D'-65]=500;
//     lm['M'-65]=1000;
// }
int lm[] = {1, 5, 10, 50, 100, 500, 1000};
char s[] = "IVXLCDM";
int find_pos(char c){
    for(int i = 0; i < 7; i++)
        if(s[i]==c) return i;
}
int la_ma(char c[]){
    int res = 0, idx1, idx2;
    for(int i = 0; i < strlen(c)-1; i++){
        idx1=find_pos(c[i]), idx2 = find_pos(c[i+1]);
        if(lm[idx1]>=lm[idx2]){
            res += lm[idx1];
            if(i==strlen(c)-2) 
                res += lm[idx2];
        }
        else{
            res+= lm[idx2] - lm[idx1];
            ++i;
        }
    }
    return res;
}
int main(){
    int tc; cin >> tc;
    // set_lm();
    while(tc--){
        char c[22];
        cin >> c;
        cout << la_ma(c) << endl;
    }
}