#include <bits/stdc++.h>
using namespace std;

struct Node{
    int x;
    Node* next;
};
typedef struct Node* node;

// cap phat dong 1 node moi vs du lieu la so nguyen x
node makeNode(int x){
    node tmp = new Node();
    tmp->x = x;
    tmp->next = nullptr;
    return tmp;
}

// kiem tra xem danh sach lien ket rong 
bool empty(node head){
    return head == nullptr;
}

// so phan tu cua list
int Size(node head){
    int cnt = 0;
    while(head != nullptr){
        ++cnt;
        head = head->next; // gan dia chi cua node tiep theo cho node hien tai
    }
    return cnt;
}

// them phan tu vao dau danh sach
void insertFirst(node &head, int x){
    node tmp = makeNode(x);
    if(!empty(head)){
        tmp->next = head;
        head = tmp;
    }
    else head = tmp;
}

//them phan tu vao cuoi danh sach
void insertLast(node *head, int x){
    node tmp = makeNode(x);
    if(empty(*head))
        *head = tmp;
    else{
        node a = *head;
        while(a->next != nullptr){
            a = a->next;
        }
        a->next = tmp;
    }
}

// them 1 phan tu vao giua danh sach
void insertMiddle(node &head, int x, int pos){
    int n = Size(head);
    if(pos < 0 || pos > n+1){
        cout << "Vi tri khong hop le!\n";
        return;
    }
    if(pos == 1) insertFirst(head, x);
    else if(pos == n+1) insertLast(&head, x);
    else{
        node tmp = makeNode(x);
        node p = head;
        int dem = 1;
        while(dem < pos-1){
            p = p->next;
            dem++;
        }
        tmp->next = p->next;
        p->next = tmp;
    }
}

// xoa phan tu o dau danh sach
void deleteFirst(node &head){
    if(!empty(head)){
        node tmp = head;
        head = head->next;
        delete tmp;
    }
    else return;
}

// xoa phan tu o cuoi danh sach
void deleteLast(node &head){
    if(head == nullptr) return;
    else{
        node p = head;
        node q = nullptr;
        while(p->next != nullptr){
            q = p;
            p = p->next;
        }
        if(q == nullptr) head = nullptr; // truong hop co 1 phan tu
        else{
            // node last = q->next;
            q->next = nullptr;
            // delete last;
        }
    }
}

// xoa phan tu o giua danh sach
void deleteMiddle(node &head, int pos){
    if(pos <= 0 || pos > Size(head)) return;
    if(pos == 1) deleteFirst(head);
    else{
        node tmp = head;
        for(int i = 1; i <= pos - 2; i++) tmp = tmp->next;
        node posnode = tmp->next;
        tmp->next = posnode->next;
        delete posnode;
    }
}
// dem so chu so trong danh sach
int cnt_cs(node head){
    int cnt = 0;
    while(head != nullptr){
        while(head->x){
            cnt++;
            head->x /= 10;
        }
        head = head->next;
    }
    return cnt;
}
// in ra cac phan tu trong danh sach
void in(node head){
    if(empty(head)) cout << "Danh sach khong co phan tu nao!\n";
    else{
        // int n = cnt_cs(head);
        // cout << n << endl;
        int n = Size(head);
        cout << setw(n+5) << setfill('-') << "-" << endl;
        while(head != nullptr){
            cout << head->x << " ";
            head = head->next;
        }
        cout << endl << setw(n+5) << setfill('-') << "-" << endl;
    }

}

// tim kiem 1 so trong danh sach
int search(node head, int f){
    if(empty(head)) return -1;
    else{
        for(int i = 1; i <= Size(head); i++){
            if(head->x == f) return i;
            head = head->next;
        }
    }
    return -1;
}

// sap xep 1 danh sach
void SelectionSort(node &head){
    if(empty(head)) return;
    for(node p = head; p->next != nullptr; p = p->next){
        node min = p;
        for(node q = p->next; q != nullptr; q = q->next){
            if(min->x > q->x){
                min = q;
            }
        }
        swap(min->x, p->x);
    }
}
int main(){
    node head = nullptr;
    while(1){
        cout << "--------------MENU----------------\n";
        cout << "1. Chen phan tu vao dau danh sach\n";
        cout << "2. Chen phan tu vao cuoi danh sach\n";
        cout << "3. Chen phan tu vao giua danh sach\n";
        cout << "4. Xoa phan tu dau danh sach\n";
        cout << "5. Xoa phan tu cuoi danh sach\n";
        cout << "6. Xoa phan tu giua danh sach\n";
        cout << "7. Duyet danh sach\n";
        cout << "8. Thoat\n";
        cout << "9. Tim kiem 1 so\n";
        cout << "10. Sap xep\n";
        cout << "Nhap lua chon\n";
        cout << "----------------------------------\n";
        int opt; cin >> opt;
        // system("cls");
        int tmp, pos;
        switch(opt){
            case 1:
                cout << "Nhap x = ";
                cin >> tmp;
                insertFirst(head, tmp);
                break;
            case 2:
                cout << "Nhap x = ";
                cin >> tmp;
                insertLast(&head, tmp);
                break;
            case 3:
                cout << "Nhap x = "; cin >> tmp;
                cout << "Nhap vi tri can chen: "; cin >> pos;
                insertMiddle(head, tmp, pos);
                break;
            case 4:
                deleteFirst(head); break;
            case 5:
                deleteLast(head); break;
            case 6:
                cout << "Nhap vi tri can xoa: ";
                cin >> pos;
                deleteMiddle(head, pos); break;
            case 7:
                in(head);
                // cin.ignore();
                // cin.get();
                break;
            case 9:
                int f; cin >> f;
                if(search(head, f) == -1) cout << "Khong tim thay " << f << " trong danh sach\n";
                else cout << search(head, f);
                // cin.ignore();
                // cin.get();
                break;
            case 10:
                SelectionSort(head);
                break;
            default: break;
        }
        // system("cls");
        if(opt==8){
            cout << "Ban da ket thuc!\n";
            break;
        }
    }
    return 0;
}