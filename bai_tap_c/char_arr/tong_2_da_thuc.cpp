#include <bits/stdc++.h>
using namespace std;
// int he_so(char c[]){
//     int h = 0;
//     for(int i = 0; i < strlen(c); i++){
//         if(c[i]>=48&&c[i]<=57){
//             while(c[i]>=48&&c[i]<=57&&i<strlen(c)) h = h*10 + c[i++] - 48;
//             break;
//         }
//     }
//     if(c[0]=='-') return -h;
//     return h;
// }
// int so_mu(char c[]){
//     int e = 0;
//     for(int i = 0; i < strlen(c); i++){
//         if(c[i]=='^'){
//             ++i;
//             while(c[i]>=48&&c[i]<=57&&i<strlen(c)) e = e*10 + c[i++] - 48;
//             break;
//         }
//     }
//     return e;
// }
int stoi(char c[]){
    int res = 0;
    for(int i =0; i < strlen(c); i++){
        if(c[i]=='-'){
            if(c[i+1]>=48&&c[i+1]<=57) ++i;
            else if(c[i+1]==32&&c[i+2]>=48&&c[i+2]<=57) i+=2;
            while(c[i]>=48&&c[i]<=57&&i<strlen(c)){
                res = res*10 - (c[i++]-48);
            }
            return res;
        }
        else if(c[i]>=48&&c[i]<=57){
            while(c[i]>=48&&c[i]<=57&&i<strlen(c)){
                res = res*10 + (c[i++]-48);
            }
            return res;
        }
    }
}
void solve(char y[], int cnt[]){
    char *token1 = strtok(y,"*"),
    *token2 = strtok(nullptr," ");
    while(token2!=nullptr){
        cnt[stoi(token2)] += stoi(token1);
        token1 = strtok(nullptr,"*");
        token2 = strtok(nullptr," ");
    }
}

int main(){
    int tc; cin >> tc; 
    cin.ignore();
    for(int i = 1; i <= tc; i++){
        cout << "#Test " << i << ": ";
        char y1[100000], y2[100000];
        cin.getline(y1,100000);
        cin.getline(y2,100000);
        int cnt[10001] = {0};
        solve(y1,cnt);
        solve(y2,cnt);
        int cnt_dt = 0, max_mu = -1e9;
        for(int i = 0; i < 10001; i++){
            if(cnt[i]){
                cnt_dt++;
                if(max_mu < i) max_mu = i;
            }
        }
        int tmp = cnt_dt;
        for(int i = max_mu; i >= 0; i--){
            if(cnt[i]>0){
                if(cnt_dt==tmp) cout << cnt[i] << "*x^" << i;
                else cout << " + " << cnt[i] << "*x^" << i;
            }
            if(cnt[i]<0){
                if(cnt_dt==tmp) cout << "- " << -cnt[i] << "*x^" << i;
                else cout << " - " << -cnt[i] << "*x^" << i;
            }
            --tmp;
        }
        cout << endl;
    }
}