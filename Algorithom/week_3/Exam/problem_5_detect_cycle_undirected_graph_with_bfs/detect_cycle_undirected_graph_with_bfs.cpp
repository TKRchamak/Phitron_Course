#include<bits/stdc++.h>
using namespace std;

const int N =1e5;
vector<int> graph[N];
int visited[N];
int level[N];
int parent[N];

int bfs(int node){
    queue<int> q;
    q.push(node);
    parent[node] = -1;

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        if(visited[curr] == 1) continue;

        cout<<curr<<" ";
        visited[curr] = 1;

        for(auto element: graph[curr]){
            if(parent[curr] == element) continue;

            if(visited[element] == -1){
                parent[element] = curr;
                q.push(element);
            }
        }
    }
}

int main(){
    memset(visited, -1, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    int nodes, edges, src;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++){
        int n,m;
        cin>>n>>m;
        graph[n].push_back(m);
        graph[m].push_back(n);
    }

//    for(int i=0; i<nodes; i++){
//        for(auto node: graph[i]){
//            cout<<node<<" ";
//        }
//    }
    bfs(1);

    return 0;
}
