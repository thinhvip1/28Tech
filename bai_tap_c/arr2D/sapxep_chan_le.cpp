#include <bits/stdc++.h>
using namespace std;
void selectionSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        int m = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[m]) m = j;
        }
        if(m!=i){
            int tmp = a[i];
            a[i] = a[m];
            a[m] = tmp;
        }
    }
}
int main(){
    int n; cin >> n;
    int chan[n], le[n], c = 0, l = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x&1) le[l++] = x;
        else chan[c++] = x;
    }
    selectionSort(chan, c);
    selectionSort(le, l);
    for(int i = 0; i < c; i++) cout << chan[i] << " ";  
    for(int i = 0; i < l; i++) cout << le[i] << " ";
    return 0;
}