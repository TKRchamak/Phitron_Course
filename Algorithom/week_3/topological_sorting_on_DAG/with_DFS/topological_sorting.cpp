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
vector<int>adj_list[N];
stack<int>node_stack;


void dfs(int node){
    visited[node] = 1;

    for(int adj_node: adj_list[node]){
        if(visited[adj_node] == -1){
            dfs(adj_node);
        }
    }
    node_stack.push(node);
}

int main(){
    memset(visited, -1, sizeof(visited)); // set all value -1;

    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++){
        int u,v;
        cin>>u>>v; // u->v
        adj_list[u].push_back(v);
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