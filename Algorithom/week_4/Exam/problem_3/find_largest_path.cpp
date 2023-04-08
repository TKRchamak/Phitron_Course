#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int>graph[N];
int visited[N];
int parent[N];
vector<int> largest_path= {0, 0};
pair<int, int> largest_leap_node;
int level[N];
int curr_max_length=0;
int max_leap_node = -1;
int range;


void print_graph(){
    for(int i=2; i<=range; i++){
        for(auto element: graph[i]){
            cout<<i<<" "<<element<<endl;
        }
        cout<<endl;
    }
}

void print_path(int dest){
    if(parent[dest]!=-1){
        print_path(parent[dest]);
    }
    cout<<dest<<" ";
}

void dfs(int node, int parent_node){
//    cout<< node << " "<<parent_node <<endl;
    visited[node] = 1;
    parent[node] = parent_node;

    for(int adj_node: graph[node]){
        if(visited[adj_node] == 0 && level[adj_node] == 0){
            level[adj_node] = level[node]+1;
            if(level[adj_node]> curr_max_length){
                curr_max_length = level[adj_node];
                max_leap_node = adj_node;
            }
            dfs(adj_node, node);
        }
        else {
            continue;
        }
    }
}

int main(){
    cin>>range;

    for(int i=2; i<=range; i++){
        for(int j=i+1; j<=range; j++){
            if(j%i !=0) continue;
            else graph[i].push_back(j);
        }
    }

    for(int i=2; i<=range; i++){
        if(visited[i] == 0) dfs(i, -1);
        else continue;
    }

    cout<<"Max length is : "<< curr_max_length+1 <<endl;
    cout<<"The path is: ";
    print_path(max_leap_node);


    return 0;
}
