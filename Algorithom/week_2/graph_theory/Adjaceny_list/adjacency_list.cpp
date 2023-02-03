/*
 '''
     if in a matrix edge number is small than adjacency list is better for time complexity

 '''

 '''
     pair
     pair<int, int> pair_name;
     {1,2}  ---> this is also a pair
     pair_name.first
     pair_name.second

     vector
     vector<int>vector_name[vector_size];
     vector<int>my_vector[10];
     vector<pair<int, int>>my_pair_vector[10];
 '''
*/

/*
0-----1
     / \
    2---3


0 -> 1
1 -> 0,2,3
2 -> 1,3
3 -> 1,2



time complexity -> O(n*2)
space complexity -> O(n*2)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nodes = 4;
    vector<int>adjacency_list[nodes];
    vector<pair<int, int>>adjacency_list[nodes];

    // without edge
    // adjacency_list[0] = {1};
    // adjacency_list[1] = {0, 2, 3};
    // adjacency_list[2] = {1, 3};
    // adjacency_list[3] = {1, 2};

    // with edge
    adjacency_list[0].push_back({1, 2})
    adjacency_list[1].push_back({2, 5})
    adjacency_list[1].push_back({3, 7})
    adjacency_list[2].push_back({3, 4})

    for(int i=0; i<nodes; i++)
    {
        for(int j=0; j<adjacency_list[i].size(); j++)
        {
            cout<<adjacency_list[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
