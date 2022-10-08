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

    void printNeighbour(int row)
    {
        cout<<row<<" : ";
        for(auto i=adj[row].begin(); i!=adj[row].end(); i++)
        {
            cout<<*i<<" ";
        }
        cout<<endl;
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

//    for(int i=0; i<V; i++)
//    {
//        g.printNeighbour(i);
//    }

    int level;
    cin>>level;
    g.printNeighbour(level-1);

    return 0;
}


//7 10 4
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
