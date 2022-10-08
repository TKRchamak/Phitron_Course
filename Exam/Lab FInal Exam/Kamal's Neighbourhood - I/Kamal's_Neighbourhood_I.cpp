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
        adj[v].push_back(u);
    }

    void size_of_row(int row)
    {
        cout<<adj[row].size();
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


    int row;
    cin>>row;
    g.size_of_row(row);

    return 0;
}
