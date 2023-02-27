/*

input ---->

no loop--->
4 3
3 2
2 1
1 4

have loop --->
4 4
3 2
2 1
1 4
3 4

*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> graph[N];
int visited[N];
int parent[N];

bool dfs(int node){
    visited[node] = 1;

    for(auto element: graph[node]){
        if(element == parent[node]) continue;

        if(visited[element]==-1){
            parent[element] = node;

            bool have_loop = dfs(element);
            if(have_loop) return true;
        }else if(visited[element] == 1){
            return true;
        }
    }

    visited[node]=2;
    return false;
}


int main(){
    int nodes, edges;
    cin>>nodes>>edges;

    memset(visited, -1, sizeof(visited));

    for(int i=0; i<edges; i++){
        int n,m;
        cin>>n>>m;
        graph[n].push_back(m);
        graph[m].push_back(n);
    }

    bool cycle_exist = false;

    for(int i=1; i<=nodes; i++){
        if(visited[i] == -1 && !cycle_exist){
            parent[1] = -1;
            bool get_bool = dfs(i);
            if(get_bool){
                cycle_exist = true;
                break;
            }
        }
    }

    if(cycle_exist) cout<<"Find loop in this graph"<<endl;
    else cout<<"This graph have not any loop"<<endl;

    return 0;
}
