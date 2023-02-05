#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visitedArray[N];
vector<int>graph[N];


int main()
{
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for(int i=0; i<nodes+1; i++)
    {
        cout<<i<<"----->";
        for(auto element: graph[i])
        {
            cout<<element<<" ";
        }
        cout<<endl;
    }
    return 0;
}
