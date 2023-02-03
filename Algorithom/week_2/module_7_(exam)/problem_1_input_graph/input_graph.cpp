#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited[N];
vector<int>adj_list[N];


void dfs(int node){
    cout<< node<<endl;
    visited[node] = 1;

    for(int adj_node: adj_list[node]){
        if(visited[adj_node]==0){
            dfs(adj_node);
        }
    }
}

int main()
{
    // n = number of nodes
    // m = number of edges
    int n, m;
    cin >> n >> m;

    for(int i = 0 ; i < m ; i++)   // loop over the number of edges
    {
        int u, v;
        cin >> u >> v; // There exists a directed edge from u to v
        adj_list[u].push_back(v);
    }

    int src_node = 1;
    dfs(src_node);

    return 0;
}

/*
1------2-------3
      / \
     4   5

5 5

2 1
2 3
2 4
2 5
1 4

*/


