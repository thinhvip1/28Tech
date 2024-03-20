#include <bits/stdc++.h>
using namespace std;

void init(int a[], int n){
    for(int i = 0; i < n; i++){
        a[i] = i+1;
    }
}
void reverse(int a[], int l, int r){
    while(l < r){
        swap(a[l], a[r]);
        l++; r--;
    }
}
void next(int a[], int n, bool &ok){
    int i = n-2;
    while(i >= 0 && a[i] > a[i+1]) --i;
    if(i == -1) ok = false;
    else{
        for(int j = n-1; j >= 0; j--){
            if(a[j] > a[i]){
                swap(a[i], a[j]);
                reverse(a, i+1, n-1);
                break;
            }
        }
    }
}
bool check(int b[][100], int a[], int n, int k){
    int sum = 0;
    for(int i = 0; i < n; i++) sum += b[i][a[i]-1];
    return sum == k;
}
int main(){
    int n, k; cin >> n >> k;
    int b[100][100];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> b[i][j];
    vector<vector<int>> v;
    int a[n];
    init(a, n);
    bool ok = true;
    while(ok){
        int sum = 0;
        if(check(b, a, n, k)){
            vector<int> tmp(a, a+n);
            v.push_back(tmp);
        }
        next(a, n, ok);
    }

// cach 2
/*     for(int i = 0; i < n; i++) a[i] = i+1;
    do{
        if(check(b, a, n, k)){
            vector<int> tmp(a, a+n);
            v.push_back(tmp);
        }
    }while(next_permutation(a, a + n)); */

    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        for(int x : v[i]) cout << x << " ";
        cout << endl;
    }
}