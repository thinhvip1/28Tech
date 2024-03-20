#include <bits/stdc++.h>
using namespace std;
int n, a[100];
bool used[100];
void in(){
    for(int i = 1; i <= n; i++) cout << a[i];
    cout << endl;
}
void Try(int i){
    for(int j = 1; j <= n; j++){
        // duyệt xem a[i] có khả năng nhận j không
        if(used[j] == false){
            used[j] = true;
            a[i] = j;
            if(i == n) in();
            else Try(i+1);
            // backtrack
            used[j] = false;
        }
    }
}
int main(){
    cin >> n;
    Try(1);
}