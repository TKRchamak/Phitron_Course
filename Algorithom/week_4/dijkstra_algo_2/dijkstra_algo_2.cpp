#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
const int INF = 1e9;

vector<pair<int, int>> graph[N];
int visited[N];
int d[N];
priority_queue<pair<int, int>> pq;


void dijkstra_algo(int src)
{
    memset(d, INF, sizeof(d));
    memset(visited, -1, sizeof(visited));
    d[src] = 0;
    pq.push({d[src], src});


    while(!pq.empty()){
        pair<int, int> curr_pair = pq.front();
    }
}

int main()
{
    int nodes, edges;
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

    for(int i=0; i<nodes; i++)
    {
        cout<<d[i]<<" ";
    }

    return 0;
}
