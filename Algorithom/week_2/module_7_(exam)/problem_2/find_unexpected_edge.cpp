/*
inputs
5 5

2 1
2 3
2 4
2 5
1 4


6 6

0 1
1 2
2 3
1 5
2 4
5 4


6 9

1 2
2 1
2 3
2 5
3 2
3 4
5 6
6 5
4 5
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited[N];
vector<int>adj_list[N];


void dfs(int node){
    cout<< node<<endl;
    visited[node] = 1;

    for(int adj_node: adj_list[node]){
        if(visited[adj_node]==0){
            dfs(adj_node);
        }
    }
}


int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);

    if (it != v.end())
    {
        int index = it - v.begin();
        return index;
    }
    else {
        return -1;
    }
}

int main()
{
    // n = number of nodes
    // m = number of edges
    int n, m;
    cin >> n >> m;
    vector<int>adj_list[n+1];

    for(int i = 0 ; i < m ; i++)   // loop over the number of edges
    {
        int u, v;
        cin >> u >> v; // There exists a directed edge from u to v
        adj_list[u].push_back(v);
    }

    int src_node = 1;
    dfs(src_node);

//    int cont = 0;
//
//    for(vector<int> inner_adj_list: adj_list){
//        if(cont != 0){
//            cout<<cont<<"-->";
//
//            for (auto it = inner_adj_list.begin(); it != inner_adj_list.end(); ) {
//                int res = getIndex(adj_list[*it], cont);
//                if (res == -1) {
//                    it = inner_adj_list.erase(it);
//                } else {
//                    cout<<*it;
//                    ++it;
//                }
//            }
//            cout<<endl;
//        }
//        cont++;
//    }

    return 0;
}
