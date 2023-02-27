/*
Graph Must be DAG(directed acyclic  graph)
problem -----> https://cses.fi/problemset/task/1679
Assumption ----> Graph is Acyclic

input --->
5 3
1 2
3 1
4 5

output --->
3 4 1 5 2
||
4 5 3 1 2

*/


#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;
int visited[N];
vector<int>graph[N];
stack<int>node_stack;


void dfs(int node){
    visited[node] = 1;

    for(int adj_node: graph[node]){
        if(visited[adj_node] == -1){
            dfs(adj_node);
        }
    }
    node_stack.push(node);
}

void bfs(int node){
    queue<int> q;
    q.push(node);

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        if(visited[curr] == 1){
            cout<<"This graph have loop"<<endl;
            break;
        }
        visited[curr] = 1;
        node_stack.push(curr);

        for(auto element: graph[curr]){
            if(visited[element] == 0){
                q.push(element);
            }
        }
    }
}

int main(){
    memset(visited, -1, sizeof(visited)); // set all value -1;

    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++){
        int u,v;
        cin>>u>>v; // u->v
        graph[u].push_back(v);
    }

    for(int i=1; i<nodes; i++){
        if(visited[i]== -1){
            dfs(i);
        }
    }

    while(!node_stack.empty())
    {
        int curr = node_stack.top();
        node_stack.pop();
        cout<<curr<<" ";
    }

    return 0;
}
