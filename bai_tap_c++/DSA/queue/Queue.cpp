#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};
typedef struct Node* node;
bool empty(node head){
    return head == nullptr;
}
int getSize(node head){
    int cnt = 0;
    while(head != nullptr){
        cnt++;
        head = head->next;
    }
    return cnt;
}
node makeNode(int x){
    node tmp = new Node();
    tmp->data = x;
    tmp->next = nullptr;
    return tmp;
}
int getFront(node head){
    while(head->next != nullptr) head = head->next;
    return head->data;
}
// them phan tu vao queue (thêm vào cuối hàng đợi - phần tử đầu tiên của list)
void enqueue(node &head, int x){
    node tmp = makeNode(x);
    tmp->next = head;
    head = tmp;
}

//xoa phan tu o queue (xóa phần tử ở đầu hàng đợi - phần tử cuối list)
void dequeue(node &head){
    node front = head;
    while(front->next->next != nullptr){
        front = front->next;
    }
    if(front->next == nullptr) head = nullptr;
    else front->next = nullptr;
}
int main(){
    node head = nullptr;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        enqueue(head, x);
    }
    while(!empty(head)){
        cout << getFront(head) << " ";
        dequeue(head);
    }
}