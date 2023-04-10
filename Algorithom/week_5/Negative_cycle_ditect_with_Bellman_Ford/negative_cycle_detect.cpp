/*

3 3
0 1 5
1 2 -10
2 0 1

*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;

vector< pair<int, int> >graph[N];
int distance_arr[N];
int INF = 1e9;

int main(){
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0; i<nodes; i++){
        distance_arr[i] = INF;
    }

    for(int i=0; i<edges; i++){
        int u,v,w;
        cin >> u >> v >> w; // u--> start point, v--->end point, w----> u to v edge distance
        graph[u].push_back({v,w});
    }

    int src = 0;
    distance_arr[src] = 0;

    bool negative_cycle = false;

    for(int i=0; i<= nodes; i++){ // change in this line (nodes-1) to nodes
        for (int node =0; node <= nodes; node++){
            for(pair<int, int> adj_node: graph[node]){
                int u = node;
                int v = adj_node.first;
                int w = adj_node.second;

                if(distance_arr[u] + w < distance_arr[v]){
                    distance_arr[v] = distance_arr[u] + w;
                    if(i == nodes){
                        negative_cycle = true;
                    }
                }
            }
        }
    }

    if(negative_cycle){
        cout<<"Negative Cycle detect"<<endl;
    }else{
        for( int i=0; i< nodes; i++){
            cout<<distance_arr[i]<<" ";
        }
    }

    return 0;
}
