#include <bits/stdc++.h>
using namespace std;

using ll = long long;
struct Node{
    int data;
    Node *next;
};
typedef struct Node* node;
// check rong
bool empty(node top){
    return top == nullptr;
}
// lay so phan tu danh sach
int getSize(node top){
    int cnt = 0;
    while(top != nullptr){
        cnt++;
        top = top->next;
    }
    return cnt;
}
// tao Node
node makeNode(int x){
    node tmp = new Node();
    tmp->data = x;
    tmp->next = nullptr;
    return tmp;
}
// them phan tu trong stack (thêm vào đỉnh stack - đầu ds)
void push(node &top, int x){
    node tmp = makeNode(x);
    tmp->next = top;
    top = tmp;

}
// xoa phan tu trong stack (xóa ở đỉnh stack - đầu ds)
void pop(node &top){
    if(top == nullptr) return;
    else top = top->next;
}
int getTop(node top){
    return top->data;
}

int main(){
    // chuyen so thap phan thanh so nhi phan
    node top = nullptr;
    ll n; cin >> n;
    while(n){
        int r = n%2;
        push(top, r);
        n /= 2;
    }
    while(!empty(top)){
        cout << getTop(top);
        pop(top);
    }
}