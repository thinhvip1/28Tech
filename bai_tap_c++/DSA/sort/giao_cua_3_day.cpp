#include <bits/stdc++.h>
using namespace std;
void giao(int a[], int b[], int c[], int n1, int n2, int n3){
    vector<int> g;
    int i = 0, j = 0, k = 0;
    while(i<n1 && j<n2 && k<n3){
        if(a[i]==b[j] && a[i]==c[k]){
            g.push_back(a[i]);
            i++; j++; k++;
        }
        else if(a[i]<=b[j] && a[i]<=c[k]) i++;
        else if(b[j]<=a[i] && b[j]<=c[k]) j++;
        else k++;
    }
    if(g.size() == 0) cout << "-1\n";
    else{
        for(int x : g) cout << x << " ";
        cout << endl;
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        int a[n1], b[n2], c[n3];
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        for(int &x : c) cin >> x;
        giao(a,b,c,n1,n2,n3);
    }
}