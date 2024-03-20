#include <iostream>
using namespace std;

int main(){
    int tc; cin >> tc;
    for(int i = 0; i < tc; i++){
        int n; cin >> n;
        int a[n], b[n];
        for(int i = 0;i < n;i++) cin >> a[i];
        int res = 1, cnt = 1, dem = 1;
        b[0] = 0;
        for(int i = 1, j = 0;i < n;i++){
            if(a[i]>a[i-1]) dem++;
            else dem = 1;
            if(dem > res){
                res = dem;
                b[0] = i - res + 1; cnt = 1;
            }
            else if(dem == res){
                b[cnt++] = i - res + 1;
            }
        }
        cout << "TEST " << i + 1 << ":\n";
        cout << res << endl;
        for(int i = 0; i < cnt; i++){
            for(int j = 0; j < res; j++){
                cout << a[b[i]++] << " ";
            }
            cout << endl;
        }
    }
}