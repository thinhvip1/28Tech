#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, drop_word;
    getline(cin, s);
    getline(cin, drop_word);
    stringstream ss(s);
    string word;
    // nếu test case chặt chẽ y/c không có dấu cách ở cuối
    // vector<string> v; 
    while(ss >> word){
        if(word != drop_word)
            // v.push_back(word);
            cout << word << " ";
    }
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i];
    //     if(i != v.size()-1) cout << " ";
    // }
}