#include <iostream>
using namespace std;
void InsertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int tmp = a[i];
        int j = i-1;
        while(tmp<a[j] && j>=0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tmp;
    }
}
int main(){
    int n; cin >> n;
    int a[n];

    for(int &x : a) cin >> x;

    InsertionSort(a,n);

    for(int x : a) cout << x << " ";
    
}