/*
    5 6
    1 2 2
    2 5 5
    2 3 4
    1 4 1
    4 3 3
    3 5 1
*/


#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
const long long INF = 1e18;

vector<pair<int, int>> graph[N];
int visited[N];
long long distance_arr[N];
int parent_nodes[N];

int nodes, edges;

void dijkstra_algo(int src)
{
    priority_queue<pair<long long, int>> pq;
//    memset(distance_arr, INF, sizeof(distance_arr));
    for(int i =1; i<=nodes; i++){
        distance_arr[i] = INF;
    }
    memset(visited, -1, sizeof(visited));
    distance_arr[src] = 0;
    pq.push({distance_arr[src], src});
    parent_nodes[src] = -1;


    while(!pq.empty()){
        pair<int, int> curr_pair = pq.top();
        pq.pop();
        int select_node = curr_pair.second;
        if(visited[select_node]!= -1){
            continue;
        }

        visited[select_node] = 1;

        for(auto adj_entry: graph[select_node]){
            int adj_node = adj_entry.first;
            int edges_cst = adj_entry.second;
            if(distance_arr[select_node]+ edges_cst < distance_arr[adj_node]){
                parent_nodes[adj_node] = select_node;
                distance_arr[adj_node] = distance_arr[select_node]+ edges_cst;
                pq.push({ -distance_arr[adj_node], adj_node });
            }
        }
    }
}

int main()
{
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }

    int src =1;
    dijkstra_algo(src);

    for(int i=1; i<=nodes; i++)
    {
        cout<<parent_nodes[i]<<" ";
    }



    return 0;


}
