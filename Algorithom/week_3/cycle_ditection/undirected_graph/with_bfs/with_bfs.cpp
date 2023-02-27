/*
no loop --->
5 4
1 3
1 2
1 5
2 4

have loop--->
5 6
1 3
1 2
5 3
1 5
2 4
4 5

*/

#include<bits/stdc++.h>
using namespace std;

const int N =1e5;
vector<int> graph[N];
int visited[N];
int level[N];
int parent[N];

bool bfs(int node){
    bool detect_loop = false;

    queue<int> q;
    q.push(node);
    parent[node] = -1;

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        if(visited[curr] == 1) continue;

//        cout<<curr<<" ";
        visited[curr] = 1;

        for(auto element: graph[curr]){
            if(parent[curr] == element) continue;

            if(visited[element] == -1){
                parent[element] = curr;
                q.push(element);
            }else{
                detect_loop = true;
                break;
            }
        }

        if(detect_loop) break;
    }

    if(detect_loop)return true;
    else return false;
}

int main(){
    memset(visited, -1, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    int nodes, edges, src;
    bool find_loop = false;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++){
        int n,m;
        cin>>n>>m;
        graph[n].push_back(m);
        graph[m].push_back(n);
    }

    for(int i=0;i<nodes; i++){
        if(visited[i]==-1 && !find_loop){
            find_loop = bfs(i);
        }else break;
    }

    if(find_loop) cout<<"Find loop in this graph"<<endl;
    else cout<<"This graph have not any loop"<<endl;

    return 0;
}
