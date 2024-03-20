#include <bits/stdc++.h>
using namespace std;
// đếm số phần tử xuất hiện ở tất cả các hàng
// ví dụ:
// 2 3 2 3
// 1 2 3 2
// 2 6 2 3
// 5 2 5 3
// Ta sẽ có đáp án là 2 vì 2, 3 xuất hiện ở tất cả các hàng

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n][n], res = 0;
        map<int,int> mp;
        // nhập ma trận a
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> a[i][j];
        // Tính
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mp[a[i][j]]==i) mp[a[i][j]]++;
            }
        }
        for(auto it : mp){
            if(it.second == n) res++;
        }
        cout << res << endl;
        mp.clear();
    }
    
}