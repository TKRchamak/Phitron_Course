/*
problem ---> https://cses.fi/problemset/task/1668

1. is the cell within the maze
2. is the cell visited
3. is the cell is forbidden / wall

input -->
5 3
1 2
1 3
4 5


output ---->
1 2 2 1 2
*/


#include<bits/stdc++.h>
using namespace std;
const int N =2e5+5;

vector<int> graph[N];
int visited[N];
int color[N];


bool dfs(int node)
{
    visited[node]=1;

    for(auto element: graph[node]){
        if(visited[element] == -1){
            if(color[node] == 1)color[element] = 2;
            else color[element] = 1;
            bool is_bicolorAble = dfs(element);
            if(!is_bicolorAble) return false;
        }
        else{
            if(color[node] == color[element]){
                return false;
            }
        }
    }
    return true;
}



int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    memset(visited, -1, sizeof(visited));
    memset(color, -1, sizeof(color));

    for(int i=0; i<edges; i++)
    {
        int n, m;
        cin>>n>>m;
        graph[n].push_back(m);
        graph[m].push_back(n);
    }

    bool is_bicolorable = true;

    for(int i=1; i<=nodes; i++)
    {
        if(visited[i]==-1)
        {
            color[i] = 1;
            bool ok = dfs(i);
            if(!ok) {
                is_bicolorable = false;
                break;
            }
        }
    }

    if(!is_bicolorable){
        cout<<"IMPOSSIBLE !"<<endl;
    }else{
        for(int i=1; i<=nodes; i++)
        {
            cout<<color[i]<<endl;
        }
    }


//    for(int i=1; i<=nodes; i++)
//    {
//        cout<<i<<" node-----> ";
//        for(auto element : graph[i])
//        {
//            cout<<element<<" ";
//        }
//        cout<<endl;
//    }

    return 0;
}
