#include <bits/stdc++.h>
using namespace std;
void selectionSort(int a[], int n){
    for(int i = 0; i < n; i++){
        int m = i;
        for(int j = i+1; j < n; j++){
            if(a[m] > a[j]) m = j;
        }
        if(m!=i){
            int tmp = a[i];
            a[i] = a[m];
            a[m]  = tmp;
        }
    }
}
int cmp(const void *a, const void *b){
    return (int*)a - (int*)b;
}
int main(){
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    //sap xep theo hang
    // for(int i = 0; i < n; i++){
    //     selectionSort(a[i],m);
    // }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //Sap xep theo cot
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            int idx = i;
            for(int k = i + 1; k < n; k++){
                if(a[idx][j] > a[k][j]) idx = k;
            }
            if(idx!=i){
                int tmp = a[i][j];
                a[i][j] = a[idx][j];
                a[idx][j] = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}