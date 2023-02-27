/*
- create an array "indegree" to maintain the number of indegrees to a node.
	i.e. for every edge a -> b perform indegree[b]++

- create an empty stack to store the topsort order

- create a queue and push all the nodes in the queue with indegree[node] == 0

- while the queue is not empty:
	- pop "head" from queue

	- stack.push(head)

	- for adj_node in adj_list[head]:
		- decrement indegree[adj_node] by 1

		- if indegree[adj_node] == 0:
			- queue.push(adj_node)

- pop every node in the stack and print in the output





problem -----> https://cses.fi/problemset/task/1679
Assumption ----> Graph is Acyclic

input --->
5 3
1 2
3 1
4 5

output --->
3 4 1 5 2
||
4 5 3 1 2

*/


#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;
int visited[N];
vector<int>adj_list[N];
stack<int>node_stack;

//void dfs(int node){
//    visited[node] = 1;
//
//    for(int adj_node: adj_list[node]){
//        if(visited[adj_node] == -1){
//            dfs(adj_node);
//        }
//    }
//    node_stack.push(node);
//}


void bfs(int node){
    queue<int> q;
    q.push(node);

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        if(visited[curr]==1){
            continue;
        }
        cout<<curr<<" ";
        visited[curr]=1;

        for(auto element: adj_list[curr]){
            if(visited[element] == -1){
                q.push(element);
            }
        }
    }
}

int main(){
    memset(visited, -1, sizeof(visited)); // set all value -1;

    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++){
        int u,v;
        cin>>u>>v; // u->v
        adj_list[u].push_back(v);
    }

    for(int i=1; i<nodes; i++){
        if(visited[i]== -1){
            bfs(i);
        }
    }

    while(!node_stack.empty())
    {
        int curr = node_stack.top();
        node_stack.pop();
        cout<<curr<<" ";
    }

    return 0;
}
