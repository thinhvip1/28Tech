#include <iostream>
using namespace std;
void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}
void BubbleSort(int a[], int n){
    for(int i = n-1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(a[j] > a[j+1]) swap(a[j],a[j+1]);
        }
    } 
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    BubbleSort(a,n);
    for(int x : a) cout << x << " ";
}