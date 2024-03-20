#include <bits/stdc++.h>
using namespace std;
int sum_num(char c[]){
    int sum = 0, n = 0; char num[100000];
    for(int i = 0; i < strlen(c); i++){
            if(c[i]>47 && c[i] < 58){
                while(c[i]>47 && c[i] < 58){
                    num[n++] = c[i++];
                }
                num[n] = '\0';
                sum += stoi(num);
                n = 0;
            }
        }
    return sum;
}
int sum_num1(char c[]){
    int sum = 0, res = 0;
    for(int i = 0; i < strlen(c); i++){
        if(c[i]>47 && c[i] < 58)
            res = res*10 + (c[i] - 48);
        else{
            sum += res;
            res = 0;
        }
        if(i==strlen(c)-1) sum += res;
    }
    return sum;
}
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        char c[100000];
        cin.getline(c,1000);
        // cout << sum_num(c) << endl;
        cout << sum_num1(c) << endl;        
    }
}