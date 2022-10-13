#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    vector <int> *adj;
public:
    Graph(int V)
    {
        this->V=V;
        this->adj=new vector <int> [V];
    }

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
    }

    void size_of_row(int row)
    {
        cout<<adj[row].size();
    }

    int DFS(int source)
    {

        static vector<bool> visited (V, false);
        visited[source] = true;
//        cout<<source<<" ";
        static int res=0;

        for(auto element: adj[source])
        {
            int v = element;
            if(visited[v]!=true){
                DFS(v);
                res++;
            }
        }

        return res;
    }
};

int main()
{
    int V, E;  //V--->node E---->edge
    cin>>V>>E;

    Graph g(V);

    for(int i=0; i<E; i++)
    {
        int startP, endP;
        cin>>startP>>endP;
        g.addEdge(startP, endP);
    }

    int start_point;
    cin>>start_point;
    int res = g.DFS(start_point);
    cout<<res;

    return 0;
}
