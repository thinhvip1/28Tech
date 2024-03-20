#include <bits/stdc++.h>
using namespace std;
struct vidu{
    char y; // 1 byte
    int x; // 4 byte
};
struct foo3{
    char* p;
    char c;
    int n;
};
struct foo4{
    short x;
    double a;
    char p;
};
string stdstr(string s){
    for(char &c : s) c = toupper(c);
    return s;
}
class NV{
    private:
        static int ma;
    public:
    NV(){
        ma++;
    }
    ~NV(){};
    int getMa(){
        return this->ma;
    }
    void hien(){
        cout << this->ma << endl;
    }
};
int NV::ma = 0;
int main(){
    NV a, b;
    // cout << a.getMa() << " " << b.getMa();
    a.hien();
    b.hien();
}