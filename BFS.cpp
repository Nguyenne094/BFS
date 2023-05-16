// C++ Programming  Language
// BFS Algorithm
// DCCNTT 13.10.11

#include <iostream> 
#include <queue>
using namespace std;

/*
Input
10 11
1 2
1 3
1 5
1 10
2 4
3 6
3 7
3 9
6 7
5 8
8 9
*/

vector<int> adj[100];
bool visited[100] = {false};

void bfs(int uv){
    queue<int> q;
    q.push(uv);
    visited[uv] = true;

    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout << v << " ";
        for(int x : adj[v]){    
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }

}

int main(){
    int m, n; cin >> m >> n;

    //Nhập danh sách kề
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    //Xuất phát từ đỉnh 1;
    bfs(1);
    return 0;
}