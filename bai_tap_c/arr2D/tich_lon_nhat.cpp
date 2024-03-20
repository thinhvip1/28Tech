#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int min1 = 1e9+1, min2 = 1e9+1, max1 = -1e9-1, max2 = -1e9-1;
    for(int i = 0; i < n; i++){
        if(a[i]>max1){
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i]>max2) max2 = a[i];
        if(a[i]<min1){
            min2 = min1;
            min1 = a[i];
        }
        else if(a[i]<min2) min2 = a[i];
    }
    long long max = (long long) max1 * max2;
    long long min = (long long) min1 * min2;
    if(max > min) cout << max;
    else cout << min;
}