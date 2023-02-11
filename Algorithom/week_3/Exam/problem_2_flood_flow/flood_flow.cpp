/*
5 8
########
#M..A..#
#.#.M#.#
#M#..#..
#.######
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1000;
int labyrinth[N][N];
int visited[N][N];

int n,m;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool is_inside(pair<int, int>coord){
    int x = coord.first;
    int y = coord.second;

    if(x>=0 && x<n && y>=0 && y<m){
        return true;
    }else return false;
}

bool is_safe(pair<int, int>coord){
    int x = coord.first;
    int y = coord.second;

    if(labyrinth[x][y] == -1){
        return false;
    }else return true;
}

bool is_wall(pair<int, int> p){
    int x = p.first;
    int y = p.second;

    if(x==0 || x==m-1 || y==0 || y ==m-1 ){
        return true;
    }else return false;
}

bool bfs(pair<int,int> node){
    queue<pair<int,int>>q;
    q.push(node);
    visited[node.first][node.second] = 1;

    while(!q.empty()){
        pair<int, int> head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;

        if(is_wall(head)){
            return true;
        }

        for(int i=0; i<4; i++){
            int new_x = x+dx[i];
            int new_y = y+dy[i];

            pair<int, int> adj_node = {new_x, new_y};

            if(is_inside(adj_node) && is_safe(adj_node) && visited[new_x][new_y] == 0){
                visited[new_x][new_y] = 1;
                q.push(adj_node);
            }
        }
    }
    return false;
}



int main(){
    cin>>n>>m;
    pair<int, int> src;

    for(int i=0;i<n; i++){
        string row;
        cin>>row;
        for(int j=0; j<m; j++){
            if(row[j]=='#' || row[j]=='M'){
                labyrinth[i][j] = -1;
            }else if(row[j]=='A'){
                src = {i, j};
                labyrinth[i][j] = 0;
            }else{
                labyrinth[i][j] = 0;
            }
        }
    }

    if(bfs(src)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
