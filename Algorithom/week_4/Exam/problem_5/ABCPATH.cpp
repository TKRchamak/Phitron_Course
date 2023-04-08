/*
top                 x,   y-1
down                x,   y+1
right               x+1, y
left                x-1, y
left_corner_top     x-1, y-1
right_corner_top    x+1, y-1
left_corner_bottom  x-1, y+1
right_corner_bottom x+1, y+1

0,0     0,1     0,2
1,0     1,1     1,2
2,0     2,1     2,2
3,0     3,1     3,2

*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e3;
int graph[N][N]; // two_d_graph
int visited[N][N];
int row, col , length=0;
int dx[] = {0, 0, -1, 1, -1, 1, -1, 1};
int dy[] = {1, -1, 0, 0, -1, -1, 1, 1};


bool check_in_side(pair<int, int>p){
    int x = p.first;
    int y = p.second;
    if(x>=0 && x<row && y>=0 && y<col) return true;
    else return false;
}

bool is_visited(pair<int, int>wall)
{
    if(visited[wall.first][wall.second] == 1)return true;
    else return false;
}


void bfs(pair<int, int>src)
{
    queue<pair<int, int>>q;
    q.push(src);
    visited[src.first][src.second] = 1;
    length = 1;

    while(!q.empty())
    {
        pair<int,int>head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;
        for(int i=0; i<8; i++)
        {
            int temp_x = x+dx[i];
            int temp_y = y+dy[i];
            pair<int, int>adj_node = {temp_x, temp_y};

            if(check_in_side(adj_node) && !is_visited(adj_node))
            {
                if(graph[x][y]+1 == graph[temp_x][temp_y]){
                    q.push(adj_node);
                    visited[temp_x][temp_y] = 1;
                    length++;
                }
            }
        }
    }
}

int main(){
    cin>>row>>col;

    for(int i=0; i<row; i++){
        string s;
        cin>>s;

        for(int j=0; j<col; j++){
            int val = int(s[j]) - int('A');
            graph[i][j] = val;
        }
    }
    pair<int, int> src;
    cin>>src.first>>src.second;

    bfs(src);

    cout<<length<<endl;


//    for(int i=0; i<row; i++){
//        for(int j=0; j<col; j++){
//            cout<<i<<','<<j<<'\t';
//        }
//        cout<<endl;
//    }

    return 0;
}
