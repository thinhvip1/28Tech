#include <bits/stdc++.h>

#define ll long long
    
using namespace std;
typedef struct SV{
    string name;
    string date;
    double avg_point;
    struct SV *next;
}SV;

void push(SV *head, string name1, string date1, double avg){
    SV *p = new SV[1];
    p->name = name1;
    p->date = date1;
    p->avg_point = avg;
    head->next = p;
    p->next = nullptr;
}
string noi_xau(string s){
    for(int i = s.size()-1; i >= 0; i--)
        s += s[i];
    return s;
}
string reverse1(string s){
    string res = "";
    for(int i = s.size()-1; i >= 0; i--){
        res += s[i];
    }
    return res;
}
//Lương theo các mức lũy tiến
int progressive(int sp){
    if (sp <= 0) sp = 0; // 
    if (sp <= 500) sp = sp * 10000;   // từ 1 đến 500: đơn giá quy định
    else if (sp <= 1000) sp = 500 * 10000 + (sp - 5000) * 10450; // từ 501 đến 1000: đơn giá tăng 4.5%
    else sp = 500 * 10000 + 500 * 10450 + (sp - 1000) * 10900; // từ 1001 trở lên: đơn giá tăng 9%
    return sp;
}
// Tính tiền lương
int Salary(int tot, int xau) {
    // tot = this->getSp_tot(); // số lượng sản phẩm tốt
    // xau = this->getSp_xau(); // số lượng sản phẩm xấu
    int sp = tot + xau; // lưu tổng số lượng sp tốt và sp xấu ở mức cho phép
    int ans; // lưu kết quả lương
    if ((double) xau <= 4 * sp / 100) { // tỷ lệ sản phẩm xấu ở mức cho phép (<= 4%)
        ans = progressive(sp);
    }
    // tỷ lệ sản phẩm xấu vượt mức cho phép (> 4%)
    else {  
        sp = tot + (int)(4 * sp / 100);  //cout << sp << endl;
        xau = xau - (int)(4 * (tot + xau)/100);   //cout << xau << endl; // số lượng sản phẩm xấu vượt mức cho phép
        ans = progressive(sp) + xau * 7500;
    }
    return ans;
}
int main(){
    // int x, y; cin >> x >> y;
    // cout << Salary(x,y);
    string s ="6. Nhap bang cong cho nhan vien theo ma nhan vien.";
    cout << s.size();
}