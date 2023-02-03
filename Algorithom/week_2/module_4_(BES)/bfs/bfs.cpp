#include<bits/stdc++.h>
#define pub push_back
using namespace std;

bool completed[1000];
int level[1000];
vector<int> v[1000]; // vector er 5 size er array || int arr[5] ----> int er 5 size er array


void bfs(int source)
{
    memset(completed, false, sizeof(completed));
    memset(level, -1, sizeof(level));

    queue<int> q;
    q.push(source);
    level[source] = 0;

    while(!q.empty())
    {
        int parent = q.front();
        q.pop();
        if(completed[parent] == true) continue; // if true pass bellow code

        cout<<parent<<endl;
        completed[parent] = true;

        for(int i=0; i<v[parent].size(); i++)
        {
            int child = v[parent][i];
            if(level[child] == -1)
            {
                level[child] = level[parent]+1;
            }
            if(completed[child] == false)
            {
                q.push(child);
            }
        }
    }
}

void solve()
{
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0;i<edges; i++)
    {
        int x, y;
        cin>>x>>y;
        v[x].pub(y);
        v[y].pub(x);
    }

    bfs(3); //for traversel
    cout<<level[0]; //level for node 0


//    for(int i=0;i<nodes; i++)
//    {
//        cout<< i << "---> ";
//        for(auto element: v[i])
//        {
//            cout<<element<<" ";
//        }
//        cout<<endl;
//    }
}

int main()
{
    solve();
    return 0;
}


//5 6
//1 2
//1 3
//2 0
//2 4
//3 0
//3 4
