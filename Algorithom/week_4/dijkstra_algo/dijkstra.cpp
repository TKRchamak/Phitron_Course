/*

// input ---> a weighted graph and a source node
// output ----> distance of all nodes from the source node

// time complexity ---> O n^2

source theke baki node gulor distance ber korte hobe
1. select source node and make visited, set distance 0, and calculate the nearest single edge nodes distance = source node value + edge value.
2. find the smallest value but not visited, take this node as a source node and calculate again.


- create a distance array "d"
- initialize all value of "d" to infinity
- d[src] = 0;
- create a visited array and mark all node as unvisited

- for i=0 to i=n-1
    - pick the "unvisited" node with the shortest q[node]
    - visited[node]=1;
    - for all adj_node of node:
        - if d[node] + c(node, adj_node) < d[adj_node]
            d[adj_node] = d[node]+c(node, adj_node)

- output array "d"

*/

//  #include<bits/stdc++.h>
#include<iostream>

using namespace std;

const int N = 1e5+5;
const int INF = 1e9;
//const long long INF = 1e18;

vector< pair<int, int> > graph[N];

int output_arr[N], visited[N];
int nodes, edges;



void dijkstra(int src){
    for(int i=0; i<nodes; i++){
        d[i] =INF;
    }
    output_arr[src] = 0;

    for(int i=0; i<nodes; i++){
        int selected_node = -1;

        for(int j=1; j<nodes; j++){
            if(visited[j]==1) continue;

            if(selected_node==-1 || output_arr[selected_node] > d[j]){
                selected_node = j;
            }
        }

        visited[selected_node] = 1;

        for(auto adj_entry: graph[selected_node]){
            int adj_node = adj_entry.first;
            int edge_cost = adj_entry.second;

            if(output_arr[selected_node] + edge_cost < output_arr[adj_node]){
                output_arr[adj_node] = output_arr[selected_node] + edge_cost;
            }
        }
    }

}

int main(){

    cin>>nodes>>edges;

    for(int i=0; i<edges; i++){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }

    int src =1;
    dijkstra(src);

    for(int i=0; i<nodes; i++){
        cout<<output_arr[i]<<" ";
    }

    return 0;
}
