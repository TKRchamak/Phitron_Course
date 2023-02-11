/*
5 6
1 2
1 3
2 0
2 4
3 0
3 4

*/

#include<bits/stdc++.h>
#define pub push_back
using namespace std;

const int N = 1e5;
vector<int> graph[N];
int visited[N];
int level[N];

void bfs(int node){
    memset(visited, -1, sizeof(visited));
    memset(level, -1, sizeof(level));

    queue<int> q;
    q.push(node);
    level[node] = 0;

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        if(visited[curr] == 1) continue; // if true pass bellow code

//        cout<<curr<<" ";
        visited[curr] = 1;

        for(auto adj_node: graph[curr]){
            if(visited[adj_node]==-1){
                level[adj_node] = level[curr]+1;
                q.push(adj_node);
            }
        }
    }

}

int main(){
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0;i<edges; i++)
    {
        int x, y;
        cin>>x>>y;
        graph[x].pub(y);
        graph[y].pub(x);
    }

    bfs(3); //for traversel

    for(int i=0; i<nodes; i++){
        cout<<"Level of "<<i<<" -----> "<<level[i]<<endl;
    }
    return 0;
}
