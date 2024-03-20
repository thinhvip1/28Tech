#include <bits/stdc++.h>
using namespace std;
// ss << num // ghi dữ liệu vào ss
// ss >> num // đọc dữ liệu từ ss
int main(){
    string arr[5] = {"nguyen", "van", "thinh", "k57s2"};
    cout << sizeof(arr) << " ";
    for(int i = 0; i < sizeof(arr)/sizeof(string); i++){
        cout << sizeof(arr[i]) << " ";
    }
    cout << sizeof(string) << " " << sizeof(char);
}