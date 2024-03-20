#include <bits/stdc++.h>
using namespace std;

void init(vector<int> &v, int num){
    v.push_back(num);
}
void next(vector<int> &v, int num, bool &ok){
    int i = v.size() - 1;
    int thieu = 0;
    while(i >= 0 && v[i] == 1){
        v.pop_back();
        thieu++;
        --i;
    }
    if(i == -1) ok = false;
    else{
        v[i]--;
        thieu++;
        int q = thieu / v[i];
        int r = thieu % v[i];
        if(q)
            for(int j = 0; j < q; j++)
                v.push_back(v[i]);
        if(r) v.push_back(r);
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int num; cin >> num;
        int cnt;
        vector<int> v;
        init(v, num);
        bool ok = true;
        while(ok){
            cout << "(";
            for(int i = 0; i < v.size(); i++){
                cout << v[i];
                if(i != v.size() - 1) cout << " ";
                else cout << ")";
            }
            next(v, num, ok);
        }
        cout << endl;
    }
}