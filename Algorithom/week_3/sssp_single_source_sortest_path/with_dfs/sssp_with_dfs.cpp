#include<bits/stdc++.h>
using namespace std;

const int N=1e5;
vector<int> graph[N];
int visited[N];
int level[N];


void dfs(int node){
    visited[node] = 1;
    for(auto element: graph[node]){
        if(visited[element] == -1 && level[element] == -1){
            level[element]=level[node]+1;
            dfs(element);
        }
    }
}


int main(){
    memset(visited, -1, sizeof(visited));
    memset(level, -1, sizeof(level));
    int nodes, edges, src;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++){
        int n,m;
        cin>>n>>m;
        graph[n].push_back(m);
    }
    cout<<"Enter source node : ";
    cin>>src;

    level[src] = 0;
    dfs(src);

    for(int i=0; i<nodes; i++){
        cout<<i<<" distance from source node is"<< "------>"<<level[i]<<endl;
    }
    return 0;
}
