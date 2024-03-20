#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a==1||b==1) return 1;
    while(a!=b){
        if(a>b) a-=b;
        else b-=a;
    }
    return a;
}
int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i < b; i++){
        for(int j = i+1; j <= b; j++)
            if(gcd(i,j)==1){
                 cout << "(" << i << " " << j << ")" << endl;
            }
    }
}