/*
bool detect_cycle(int node) {
	- mark visited[node] as 1

	- for all adj_node of adj_list[node]:

		Case-1: “node” is the parent of “adj_node”:
			- ignore

		Case-2: visited[adj_node] is 0:
			- mark "node" as the parent of "adj_node"
			// Same as directed graph

		Case-3: visited[adj_node] is 1:
			// Same as directed graph

		Case-4: visited[adj_node] is 2:
			// Same as directed graph


	- mark visited[node] as 2
	- return true
}


input ---->
4 3
3 2
2 1
1 4

4 4
3 2
2 1
1 4
3 4

4 4
3 2
2 1
1 4
4 3

*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> graph[N];
int visited[N];
int parent[N];

bool detect_cycle(int node, int parent){
    visited[node] = 1;

    for(auto element: graph[node]){
        if(element == parent) continue;

        if(visited[element]==0){
            bool have_loop = detect_cycle(element, node);
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

    memset(visited, 0, sizeof(visited));

    for(int i=0; i<edges; i++){
        int n,m;
        cin>>n>>m;
        graph[n].push_back(m);
        graph[m].push_back(n);
    }

    if(detect_cycle(1, -1)){
        cout<<"detect loop in graph"<<endl;
    }else{
        cout<<"No loop in graph"<<endl;
    }
//    for(int i=0;i<nodes; i++){
//        if(visited[i]==0 && !find_loop){
//            find_loop = dfs(i);
//        }else break;
//    }

    return 0;
}
