#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> edgeWeightPair;
class Graph
{
    int V;
    list <edgeWeightPair> *adj;
public:
    Graph(int V)
    {
        this->V=V;
        this->adj=new list <edgeWeightPair> [V];
    }

    void addEdge(int u, int v, int w)
    {
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    void printNeighbour(int row)
    {
        cout<<row<<" : ";
        for(auto i=adj[row].begin(); i!=adj[row].end(); i++)
        {
            cout<<" ("<< (*i).first <<", "<<(*i).second<<") ";
        }
        cout<<endl;
    }
};

int main()
{
    int V, E;  //V--->node E---->edge
    cin>>V>>E;

    Graph g(V);

    for(int i=0;i<E; i++)
    {
        int startP, endP, e_width;
        cin>>startP>>endP>>e_width;
        g.addEdge(startP, endP, e_width);
    }

    for(int i=0;i<V;i++)
    {
        g.printNeighbour(i);
    }
    return 0;
}


//7 10
//0 1 7
//0 2 1
//0 5 3
//1 3 11
//2 3 3
//2 5 8
//3 6 1
//6 5 2
//6 4 4
//5 4 6
