/*
problem -----> https://cses.fi/problemset/task/1678

  >3>
 /   \
2<----4----->1----->5

5 5

2 3
3 4
4 2
1 5
4 1


4 5

1 3
2 1
2 4
3 2
3 4

4 4

1 3
2 1
2 4
3 4

*/


#include<bits/stdc++.h>
using namespace std;
const int N =  1e5;
vector<int> graph[N];
int visited[N];

bool dfs(int node){
    visited[node]= 1;
    cout<<node<<endl;
    for(auto element: graph[node]){
        if(visited[element] == -1){
            bool get_loop = dfs(element);
            if(get_loop) return true;
        }
        else if(visited[element] == 1){
            return true;
        }
    }
    visited[node] = 2;
    return false;
}


int main(){
    memset(visited, -1, sizeof(visited));
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++){
        int n, m;
        cin>>n>>m;
        graph[n].push_back(m);
    }

    bool cycle_exist = false;

    for(int i=0; i<=nodes; i++){
        for(auto element: graph[i]){
            if(visited[element] == -1){
                bool get_bool = dfs(element);
                if(get_bool){
                    cycle_exist = true;
                    break;
                }
            }
        }
    }

    if(cycle_exist){
        cout<<"Found Cycle"<<endl;
    }
    else{
        cout<<"Cycle Not Found"<<endl;
    }


    return 0;
}
