#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int maxn = 1001;
int parent[maxn], sizes[maxn];


typedef struct edge{
    int beg, end, weight;

    edge(){}

    edge(int beg, int end, int weight){
        this->beg = beg;
        this->end = end;
        this->weight = weight;
    }
    // overloading operator
    bool operator < (const edge other_edge){
        return this->weight < other_edge.weight;
    }
}edge;

// khởi tạo node cha của 1 node bằng chính nó
void make_set(int n){
    for(int i = 1; i <= n; i++)
        parent[i] = i;
}

// thiết lập đồ thị
void input(int n, int m, vector<edge>& edges){
    for(int i = 0; i < m; i++){
        int beg, end, weight;
        cin >> beg >> end >> weight;
        edge e = edge(beg, end, weight);
        edges.push_back(e);
    }

}

// tìm node cha 
int find(int node){
    if(node == parent[node])
        return node;
    return parent[node] = find(parent[node]);
}

// sử dụng disjoin_set để thực hiện thuật toán kruskal cho thuận tiện hơn
bool Union(int node1, int node2){
    node1 = find(node1);
    node2 = find(node2);

    // nếu 2 node cùng cha tức là khi thêm vào cây khung sẽ tạo ra chu trình nên không thêm
    if(node1 == node2)
        return false;

    // coi nhóm của node1 luôn có số phần tử nhiều hơn nhóm của node2
    if(sizes[node1] < sizes[node2])
        swap(node1, node2);
    sizes[node1] += sizes[node2]; // thêm số phần tử của nhóm node2 vào nhóm node1
    parent[node2] = node1; // để đại diện của nhóm node1 làm cha cho node2

    return true;

}

// kruskal algorithm
void kruskal(int n, int m, vector<edge> edges){

    // B1: Khởi tạo cây khung rỗng mst (minimum spanning tree)
    vector<edge> mst;
    int d = 0; // lưu tổng trọng số của cây khung mst

    // B2: Sắp xếp các cạnh trong edges theo thứ tự tăng dần của trọng số
    sort(edges.begin(),edges.end());
    // for(auto it : edges)
    //     cout << it.beg << " " << it.end << " " << it.weight << endl;

    // B3: Duyệt từng cạnh trong edges
    for(int i = 0; i < m; i++){
        // nếu cây khung đủ n-1 cạnh rồi thì dừng duyệt (n node thì đồ thị sẽ có ít nhất n-1 cạnh)
        if(mst.size() == n-1)
            break;
        
        if(Union(edges[i].beg, edges[i].end)){
            mst.push_back(edges[i]);
            d += edges[i].weight;
        }

    }

    if(mst.size() != n-1)
        cout << "Đồ thị không liên thông\n";

    else{
        cout << "MST = " << d << endl;
        for(edge it : mst)
            cout << it.beg << " " << it.end << " " << it.weight << endl;
    }
    
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<edge> edges;
    input(n,m,edges);

    make_set(n);

    kruskal(n, m, edges);

}