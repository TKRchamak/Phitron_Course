//-- problem link - https://cses.fi/problemset/task/1667  || https://vjudge.net/problem/CSES-1667


#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;

vector<int>adj_list[N]; // akta array nilam jar vitore vector thakbe
int visited[N];
int level[N];
int parent[N];

void bfs(int src){
    visited[src] = 1;
    level[src] = 1;
    parent[src] = -1;

    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int head = q.front();
        q.pop();

        for(auto adj_node: adj_list[head]){
            if(visited[adj_node] == 0){
                visited[adj_node] = 1;
                level[adj_node] = level[head]+1;
                parent[adj_node] = head;
                q.push(adj_node);
            }
        }
    }
}


int main(){
    int n, m;
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src_node = 1;
    bfs(src_node);

    int dst_node = n;

    if(visited[dst_node]==0){
        cout<< "Impossible"<<"\n";
        return 0;
    }
    cout<<"Level of destination node : "<< level[dst_node]<<"\n";

    int select_node = dst_node;

    vector<int> path;

    while(true){
        path.push_back(select_node);
        if(select_node == src_node) break;
        select_node = parent[select_node];
    }

    reverse(path.begin(), path.end());

    for(auto node: path){
        cout<< node << " ";
    }
    cout<<"/n";
    return 0;
}
