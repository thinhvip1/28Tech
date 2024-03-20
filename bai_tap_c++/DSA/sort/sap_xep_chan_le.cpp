#include <bits/stdc++.h>
using namespace std;
// bool a[1001];
int cmp1(int a, int b){
    return a < b;
}
int cmp2(int a, int b){
    return a > b;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; 
        cin >> n;
        int a[n];
        vector<int> c, l;
        for(int &x : a){
            cin >> x;
            if(x%2 == 0) c.push_back(x);
            else l.push_back(x);
        }
        sort(c.begin(), c.end());
        sort(l.begin(), l.end(), greater<int>());
        int i = 0, j = 0;
        for(int x : a){
            if(x%2 == 0){
                cout << c[i] << " ";
                i++;
            }
            else{
                cout << l[j] << " ";
                j++;
            }
        }
        cout << endl;
    }
}