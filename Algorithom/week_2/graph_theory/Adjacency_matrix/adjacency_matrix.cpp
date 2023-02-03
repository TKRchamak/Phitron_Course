/*
Graph representation
====================

Topic : adjacency matrix -> 2d array

A -> 0
B -> 1
C -> 2
D -> 3

0 ----- 1
       / \
      2---3

total node = 4
total edge = 4


Undirected + Unweighted

matrix = n of nodes * n of nodes
       = 4 * 4

if ( i ---> j) direct jaoa jay tahole 
matrix[i][j] = 1 hiobe


0 -> 1
1 -> 0
1 -> 2
2 -> 1
2 -> 3
3 -> 2
3 -> 1
1 -> 3


0 1 0 0 
1 0 1 1 
0 1 0 1 
0 1 1 0  


time complexity = 0(E) = 0(n^2)
space complexity = 0(n^2)


*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int nodes = 4; // O(1)
    int matrix[nodes][nodes] ={}; //O(n^2)

    matrix[0][1] = 1; // O(1)
    matrix[1][0] = 1;
    matrix[1][2] = 1;
    matrix[2][1] = 1;
    matrix[2][3] = 1;
    matrix[3][2] = 1;
    matrix[3][1] = 1;
    matrix[1][3] = 1;


    for(int i = 0; i < nodes; i++){
       for(int j = 0; j < nodes; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}