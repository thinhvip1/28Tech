#include <bits/stdc++.h>
using namespace std;
long long fib[93];
void init(){
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < 93; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
}
int main(){
    init();
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cout << fib[i] << " ";
    return 0;
}