/*
adj_list[1] = 2,3,4
1-->2
1-->3
1-->4

0------1-----2-----3
       |     |
       |     |
       5-----4

# of edge = 6
# of nodes = 6

# list of adj_node ->

6 6

0 1
1 2
2 3
1 5
2 4
5 4


*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
bool visited[N];
vector<int>adj_list[N];


void dfs(int node){
    cout<< node<<endl;
    visited[node] = true;

    for(int adj_node: adj_list[node]){
        if(visited[adj_node]){
            continue;
        }else
        {
            dfs(adj_node);
        }
    }

//    for(int i=0; i<adj_list[node].length(); i++){  // length || size
//        int adj_node = adj_list[node][i];
//        if(visited[adj_node]==0){
//            dfs(adj_node);
//        }
//    }
}

int main(){
    memset(visited, false, sizeof(visited)); // set all value false;

    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++){
        int u,v;
        cin>>u>>v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src_node = 0;
    dfs(src_node);

    return 0;
}
