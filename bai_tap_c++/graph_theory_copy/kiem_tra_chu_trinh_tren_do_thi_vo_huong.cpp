#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;


const int maxn = 1000;
vector<int> adj_list[maxn];
bool visited[maxn];
int parent[maxn];

void init(int m){
    memset(visited, false, sizeof(visited));
    fill(parent, parent + maxn, -1);
    for(int i = 0; i < m; i++){
        int beg, end; cin >> beg >> end;
        adj_list[beg].push_back(end);
        adj_list[end].push_back(beg);
    }
}

bool check_circle(int child, int parent1){
    visited[child] = true;
    for(int neibor : adj_list[child]){
        if(visited[neibor] == false){
            if(check_circle(neibor, child))
                return true;          
        }
        else if(neibor != parent1) // mở rộng sang đỉnh kề của child là neibor nhưng đỉnh neibor này đã đc thăm và không phải cha trực tiếp parend_patht của child => có chu trình
            return true;
        
    }
    
    return false;
}

int st_path, end_path;
bool check_circle(int child){
    visited[child] = true;

    for(int neibor : adj_list[child]){
        if(visited[neibor] == false){
            parent[neibor] = child;
            if(check_circle(neibor))
                return true;
        }
        else if(neibor != parent[child]){
            cout << neibor << " " << child << " ";
            st_path = neibor;
            end_path = child;
            return true;
        }
    }

    return false;
}

bool bfs(int first_node){
    queue<int> q;
    q.push(first_node);
    visited[first_node] = true;
    while(q.empty() == false){
        int child = q.front();
        // visited[child] = true;
        q.pop();
        
        for(int neibor : adj_list[child]){
            if(visited[neibor] == false){
                q.push(neibor);
                visited[neibor] = true;
                parent[neibor] = child;
            }
            else if(neibor != parent[child]){
                return true;
            }
        }
    }

    return false;
}

int main(){
    int n, m; cin >> n >> m;

    init(m);
    
    bool flag = false;
 
    if(bfs(1))
        cout << "YES\n";    
    else 
        cout << "NO\n";


    // if(check_circle(1, 0)) cout << "YES";
    // else cout << "NO";
}
