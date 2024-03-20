#include <bits/stdc++.h>
using namespace std;

struct sinhvien{
    string msv, hoten, lop, ns;
    double gpa;
    friend ostream& operator << (ostream& out, sinhvien x){
        out << "Ma sinh vien: " << x.msv << endl;
        out << "Ten sinh vien: " << x.hoten << endl;
        out << "Lop: " << x.lop << endl;
        out << "Ngay sinh: " << x.ns << endl;
        out << "GPA: " << fixed << setprecision(2) << x.gpa << endl;
        return out;
    }
    // bool operator < (const sinhvien other){
    //     return gpa < other.gpa;
    // }
};
struct node{
    sinhvien ttsv;
    node *next;
};
typedef struct node* Node;
// nhap thong tin sinh vien
void input(sinhvien &x){
    cin.ignore();
    cout << "Nhap ma sinh vien: "; 
    getline(cin, x.msv);
    cout << "Nhap ten sinh vien: "; 
    getline(cin, x.hoten);
    cout << "Nhap lop: "; 
    getline(cin, x.lop);
    cout << "Nhap ngay sinh: ";
    getline(cin, x.ns);
    cout << "Nhap GPA: "; 
    cin >> x.gpa;
}

// them moi 1 sinh vien vao danh sach
void insert(Node& head, sinhvien x){
    Node tmp = new node();
    tmp->ttsv = x;
    tmp->next = nullptr;
    if(head == nullptr) head = tmp;
    else{
        Node p = head;
        while(p->next != nullptr){
            p = p->next;
        }
        p->next = tmp;
    }
}

//tong so sv trong ds
int size(Node head);

//hien thi toan bo ds sinh vien
void output(Node head){
    if(head == nullptr){
         cout << "Khong co sinh vien nao!\n"; return;
    }
    while(head != nullptr){
        cout << head->ttsv << endl;
        head = head->next;
    }
}

// tim kiem sv theo msv
void search(Node head, string MSV){
    if(head == nullptr){
        cout << "Empty!\n"; return;
    }
    bool found = false;
    while(head != nullptr){
        if(head->ttsv.msv.find(MSV) != string::npos){
            // da tim thay
            cout << head->ttsv << endl;
            found = true;
        }
        head = head->next;
    }
    if(!found) cout << "Khong tim thay sinh vien co msv la " << MSV << endl;
}
int size(Node head){
    int cnt = 0;
    while(head != nullptr){
        cnt++;
        head = head->next;
    }
    return cnt;
}

// in ra cac sv co gpa cao nhat
void sv_max_gpa(Node head){
    if(head == nullptr){
        cout << "Khong tim thay sinh vien nao!\n"; return;
    }
    double max = 0;
    for(Node p = head; p != nullptr; p = p->next){
        if(max < p->ttsv.gpa) max = p->ttsv.gpa;
    }
    cout << "Danh sach sinh vien co diem GPA cao nhat: \n";
    while(head != nullptr){
        if(head->ttsv.gpa == max) cout << head->ttsv << endl;
        head = head->next;
    }
}
bool cmp_gpa(sinhvien a, sinhvien b){
    return a.gpa > b.gpa;
}
// liet ke cac sv co gpa >= 2.5 theo thu tu diem giam dan
void sv_tren_tb(Node head){
    if(head == nullptr){
        cout << "Khong tim thay sinh vien nao!\n"; return;
    }
    // for(Node p = head; p->next != nullptr; p=p->next){
    //     Node max = p;
    //     for(Node q = head->next; q != nullptr; q = q->next)
    //         if(max->ttsv.gpa < q->ttsv.gpa) max = q;
    //     swap(max->ttsv, p->ttsv);
    // }
    vector<sinhvien> v;
    for(Node p = head; p != nullptr; p = p->next) v.push_back(p->ttsv);
    sort(v.begin(), v.end(), cmp_gpa);
    cout << "Danh sach sinh vien co diem GPA >= 2.5 (diem GPA giam dan):\n";
    for(int i = 0; i < v.size(); i++)
        if(v[i].gpa >= 2.5) cout << v[i] << endl;
}

vector<string> std_ten(string s){
    stringstream ss(s);
    vector<string> v;
    string word;
    while(ss >> word){
        v.push_back(word);
    }
    return v;
}

//chuan hoa ngay sinh: dd/mm/yyyy
// string std_ns(sinhvien a){
//     if(a.ns[1] == '/') a.ns = "0" + a.ns;
//     if(a.ns[4] == '/') a.ns.insert(3, '0');
//     return a.ns;
// }

bool cmp_ten(sinhvien a, sinhvien b){
    vector<string> sv1 = std_ten(a.hoten), sv2 = std_ten(b.hoten);
    if(sv1.back() != sv2.back()) return sv1.back() < sv2.back();
    int len1 = sv1.size()-1, len2 = sv2.size()-1;
    for(int i = 0; i < min(len1, len2); i++){
        if(sv1[i] != sv2[i]) return sv1[i] < sv2[i];
    }
    return len1 < len2;
}
// sap xep sinh vien theo ten theo thu tu tu dien tang dan
void sx_sv_ten(Node head){
    if(head == nullptr){
        cout << "Danh sach khong co sinh vien nao!\n"; return;
    }
    vector<sinhvien> v;
    for(Node p = head; p != nullptr; p = p->next) v.push_back(p->ttsv);
    sort(v.begin(), v.end(), cmp_ten);
    cout << "Danh sach sinh vien duoc sap xep theo ten: \n";
    for(int i = 0; i < v.size(); i++) cout << v[i] << endl;
}
int cmp_lop_ten(sinhvien a, sinhvien b){
    if(a.lop != b.lop) return a.lop < b.lop;
    return cmp_ten(a, b);
}

// sap xep sinh vien theo lop
void sx_sv_lop(Node head){
    if(head == nullptr){
        cout << "Danh sach khong co sinh vien nao!\n"; return;
    }
    vector<sinhvien> v;
    for(Node p = head; p != nullptr; p = p->next) v.push_back(p->ttsv);
    sort(v.begin(), v.end(), cmp_lop_ten);
    cout << "Danh sach sinh vien duoc sap xep theo lop:\n";
    for(int i = 0; i < v.size(); i++) cout << v[i] << endl;
}

// sap xep sinh vien theo lop, cac sv cung lop sx theo thu tu GPA giam dan
int cmp_lop_gpa(sinhvien a, sinhvien b){
    if(a.lop != b.lop) return a.lop < b.lop;
    return a.gpa > b.gpa;
}
void sx_lop_gpa(Node head){
    if(head == nullptr){
        cout << "Danh sach khong co sinh vien nao!\n"; return;
    }
    vector<sinhvien> v;
    for(Node p = head; p != nullptr; p = p->next) v.push_back(p->ttsv);
    sort(v.begin(), v.end(), cmp_lop_gpa);
    cout << "Danh sach sinh vien duoc sap xep theo lop(neu cung lop sx theo gpa giam dan) :\n";
    for(int i = 0; i < v.size(); i++) cout << v[i] << endl;
}
int main(){
    Node head = nullptr;
    bool flag = true;
    while(flag){
        cout << "-----------------------------------------------\n";
        cout << "1. Them moi 1 sinh vien vao danh sach\n";
        cout << "2. Hien thi toan bo danh sach sinh vien\n";
        cout << "3. Tim kiem sinh vien theo ma sinh vien (hien thi cac sv co ma dung voi ma can tim hoac chua ma can tim)\n";
        cout << "4. Liet ke cac sinh vien co GPA cao nhat\n";
        cout << "5. Liet ke cac sinh vien co GPA >= 2.5 theo thu tu diem giam dan\n";
        cout << "6. Sap xep sinh vien theo ten tang dan theo thu tu tu dien\n";
        cout << "7. Sap xep sinh vien theo lop, cac sv cung lop se sx theo thu tu ten tang dan theo thu tu tu dien (chu y sx ten truoc sau den ho va ten dem)\n";
        cout << "8.Sap xep sinh vien theo lop, cac sv cung lop se sap xep theo thu tu diem GPA giam dan\n";
        cout << "9. Thoat!\n";
        cout << "-----------------------------------------------\n";
        int opt;
        cout << "Nhap lua chon: "; cin >> opt;
        system("cls");
        sinhvien tmp; string MSV; 
        switch(opt){
            case 1: 
                input(tmp);
                insert(head, tmp);
                break;
            case 2:
                output(head);
                break;
            case 3:
                cin.ignore();
                cout << "Nhap ma sinh vien can tim: "; cin >> MSV;
                search(head,MSV);
                break;
            case 4:
                sv_max_gpa(head); break;
            case 5:
                sv_tren_tb(head); break;
            case 6:
                sx_sv_ten(head); break;
            case 7:
                sx_sv_lop(head); break;
            case 8:
                sx_lop_gpa(head); break;
            case 9: 
                flag = false;
                cout << "Ban da ket thuc phien lam viec!\n";
                cout << "Tam biet ban. Nhan phim enter de ket thuc..";
                break;
            default: cout << "Khong co lua chon " << opt << endl;
        }
        //dung man hinh xem ket qua
        if(opt != 9){
            cout << "Nhan phim enter de tiep tuc...";
        }
        cin.ignore();
        getchar();
        system("cls");
    }
    // delete head[];
    return 0;
}