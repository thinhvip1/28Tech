#include <bits/stdc++.h>
using namespace std;

// phân hoạch Lomuto
int Partition_Lomuto(vector<int> &v, int l, int r){
    int pivot = v[r]; // phần tử bên phải cùng
    int i = l - 1;
    for(int j = l; j < r; j++){
        if(v[j] <= pivot){
            i++;
            swap(v[j],v[i]);
        }
    }
    // đưa chốt pivot về giữa (về vị trí i hiện tại + 1)
    ++i;
    swap(v[i],v[r]);
    return i;
}
void QuickSort(vector<int> &v, int l, int r){
    if(l >= r) return;
    // phân hoạch Lomuto 
    int p = Partition_Lomuto(v, l, r);
    // phân hoạch dãy bên trái sau khi phân hoạch lần đầu
    QuickSort(v, l, p-1);
    // phân hoạch dãy bên phải sau khi phân hoạch lần đầu
    QuickSort(v, p+1, r);
}
// phân hoạch Hoare
int Partition_Hoare(vector<int> &v, int l, int r){
    int i = l-1, j = r+1, pivot = v[l];
    while(1){
        do{
            i++;
        }
        while(v[i] < pivot);
        do{
            j--;
        }
        while(v[j] > pivot);
        if(i < j) swap(v[i], v[j]); 
        else return j;   
    }
}
void QuickSort1(vector<int> &v, int l, int r){
    if(l >= r) return;
    int p = Partition_Hoare(v, l, r);
    QuickSort1(v, l, p);
    QuickSort1(v, p + 1, r);
}
int main(){
    srand(time(nullptr));
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        v[i] = rand()%1000;
    }
    QuickSort1(v, 0, n-1);
    for(auto it : v) cout << it << " ";
}