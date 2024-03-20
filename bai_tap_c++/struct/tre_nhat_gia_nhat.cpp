#include <bits/stdc++.h>
using namespace std;

struct date{
    string day, month, year;
    date(string s){
        day = s.substr(0, 2);
        month = s.substr(3, 2);
        year = s.substr(6, 4);
    }
};
struct person{
    string name;
    string ns; // dd/mm/yyyy
    bool operator < (const person other){
        date d1(ns), d2(other.ns);
        if(d1.year != d2.year) return d1.year < d2.year;
        if(d1.month != d2.month) return d1.month < d2.month;
        return d1.day < d2.day;
    }
};
int main(){
    int n; cin >> n;
    person ds[n];
    for(int i = 0; i < n; i++){
        cin >> ds[i].name;
        cin.ignore();
        getline(cin, ds[i].ns);
    }
    sort(ds, ds + n);
    cout << ds[n-1].name << "\n" << ds[0].name << endl;
}