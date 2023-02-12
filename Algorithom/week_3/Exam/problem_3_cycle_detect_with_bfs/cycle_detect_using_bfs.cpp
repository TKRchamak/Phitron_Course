/*
input ----->
(no loop)
4 3
1 2
2 3
2 4

(have loop)
4 4
1 2
2 3
4 2
3 4

(have loop)
5 5

2 3
3 4
4 2
4 1
1 5

(no loop)
5 5

2 3
3 4
2 4
4 1
1 5

*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> graph[N];
int visited[N];


bool bfs(int node){
    memset(visited, 0, sizeof(visited));
    bool detect_loop = false;

    queue<int> q;
    q.push(node);
    visited[node] = 1;

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        if(visited[curr] == 0){
            visited[curr]=1;
        }
        visited[curr]=1;

        for(auto element: graph[curr]){
            if(visited[element] == 0){
                q.push(element);
            }else{
                detect_loop = true;
                break;
            }
        }
        if(detect_loop){
            break;
        }
    }
    if(detect_loop){
        return true;
    }else return false;
}


int main(){
    int nodes, edges;
    cin>>nodes>>edges;

    bool find_loop = false;

    for(int i=0; i<edges; i++){
        int n,m;
        cin>>n>>m;
        graph[n].push_back(m);
    }

    for(int i=0;i<nodes; i++){
        if(visited[i]==0 && !find_loop){
            find_loop = bfs(i);
        }else break;
    }

     if(find_loop){
        cout<<"Find loop in this graph"<<endl;
    }else cout<<"This graph have not any loop"<<endl;

    return 0;
}
