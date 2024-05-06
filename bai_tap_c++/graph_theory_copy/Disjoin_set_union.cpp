#include <iostream>
using namespace std;

const int maxn = 1000;
int parent[maxn]; // lưu node cha
int size[maxn]; // lưu số node của 1 nhóm

void make_set(int n){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        size[i] = 1;
    }
}

// path compression
int find(int node){
    if(node == parent[node])
        return node;
    return parent[node] = find(parent[node]);
}

void Union(int node1, int node2){
    node1 = find(node1);
    node2 = find(node2);

    if(node1 != node2){
        if(size[node1] < size[node2]) // coi size của node1 luôn luôn >= size của node2
            swap(node1, node2);
            
        parent[node2] = node1;
        size[node1] += size[node2];
    }
}

int main(){

    int n, m; cin >> n >> m;
    make_set(n);

    for(int i = 0; i < m; i++){
        int beg, en; cin >> beg >> en;
        parent[en] = beg;
    }
    for(int i = 1; i <= n; i++)
        find(i);
    
    // Union(2,5);
    for(int i = 1; i <= n; i++)
        cout << i << " " << parent[i] << endl;
    
}