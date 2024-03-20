#include <bits/stdc++.h>
using namespace std;
int sum_cs(char c[]){
    int sum = 0;
    for(int i = 0; i < strlen(c); i++){
        sum += c[i] - 48;
    }
    return sum;
}
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        char c[1000];
        cin.getline(c,1000);
        cout << sum_cs(c) << endl;
    }
}