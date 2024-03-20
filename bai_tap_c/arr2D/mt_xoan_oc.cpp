#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n][n], val = 1, top = 0, bot = n-1, l = 0, r = n-1;
    while(top<=bot && l <=r){
        for(int i = l; i <= r; i++)
            a[top][i] = val++;
        top++;
        for(int i = top; i <= bot; i++)
            a[i][r]= val++;
        r--;
        if(l<=r){
            for(int i = r; i >= l; i--)
            a[bot][i] = val++;
            bot--;
        }
        if(top<=bot){
            for(int i = bot; i >= top; i--)
                a[i][l] = val++;
            l++;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << a[i][j] <<  " ";
        cout << endl;
    }
}