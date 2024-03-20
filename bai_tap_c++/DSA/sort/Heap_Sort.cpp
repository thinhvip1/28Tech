#include <bits/stdc++.h>
using namespace std;
void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}
void heapify(vector<int> &v, int n, int i){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l < n && v[l] > v[largest]) largest = l;
    if(r < n && v[r] > v[largest]) largest = r;
    if(largest != i){
        swap(v[largest], v[i]);
        heapify(v,n,largest);
    }
}
void HeapSort(vector<int> &v, int n){
    // build max-heap 
    for(int i = n/2 - 1; i >= 0; i--) heapify(v, n, i);

    // Heap sort 
    for(int i = n-1; i >= 0; i--){
        // v[0] là nốt gốc tức là phần tử lớn nhất trong max-heap 
        swap(v[i],v[0]);

        // tìm lại nút gốc mới lớn nhất trừ phần tử cuối cùng
        heapify(v, i, 0);
    }
}
int main(){
    srand(time(nullptr));
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        v[i] = rand() % 100;
    }
    for(auto it : v) cout << it << " ";
    cout << endl;
    HeapSort(v, n);
    for(auto it : v) cout << it << " ";
}