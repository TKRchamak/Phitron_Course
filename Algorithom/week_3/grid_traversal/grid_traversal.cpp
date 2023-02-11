/*
5 8

########
#.A#...#
#.##.#B#
#......#
########

output -> 9


(5,6)----> right(5,7)
           left(5,5)
           up(4, 6)
           down(6, 6)



(x,y)----> right(x, y+1)
           left (x, y-1)
           up   (x-1, y)
           down (x+1, y)


1. is the cell within the maze
2. is the cell visited
3. is the cell is forbidden / wall


*/


#include<bits/stdc++.h>
using namespace std;
const int N = 2002;
int maze[N][N], visited[N][N], level[N][N];

int n, m;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool is_inside(pair<int, int> coord)
{
    int x = coord.first;
    int y = coord.second;
    if(x>=0 && x<n && y>=0 && y<m)
    {
        return true;
    }
    return false;
}

bool is_forbidden(pair<int, int>wall)
{
    if(maze[wall.first][wall.second] == -1)
    {
        return true;
    }
    return false;
}

bool is_visited(pair<int, int>wall)
{
    if(visited[wall.first][wall.second] == 1)
    {
        return true;
    }
    return false;
}

void bfs(pair<int, int>src)
{
    memset(level, -1, sizeof(level));
    queue<pair<int, int>>q;
    q.push(src);
    visited[src.first][src.second] = 1;
    level[src.first][src.second] = 0;

    while(!q.empty())
    {
        pair<int,int>head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;
        for(int i=0; i<4; i++)
        {
            int temp_x = x+dx[i];
            int temp_y = y+dy[i];

            pair<int, int>adj_node = {temp_x, temp_y};
            if(is_inside(adj_node) && !is_forbidden(adj_node) && !is_visited(adj_node))
            {
                q.push(adj_node);
                visited[temp_x][temp_y] = 1;
                level[temp_x][temp_y] = level[x][y]+1;
            }
        }

    }

}

int main()
{
    cin>>n>>m;

    pair<int, int>src, dst;

    for(int i=0;i<n; i++)
    {
        string row;
        cin>> row;
        for(int j=0; j<m; j++)
        {
            if(row[j]== '#')
            {
                maze[i][j] = -1;
            }
            else if(row[j]=='A')
            {
                src = {i, j};
            }
            else if(row[j]=='B')
            {
                dst = {i ,j};
            }
            else{
                maze[i][j] = 0;
            }
        }
    }

    bfs(src);

    if(level[dst.first][dst.second] == -1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES, "<<"This level is : "<< level[dst.first][dst.second]<<endl;
    }


//    for(int i=0;i<n; i++)
//    {
//        for(int j=0; j<m; j++)
//        {
//            cout<<maze[i][j]<<'\t';
//        }
//        cout<<endl;
//    }
//    cout<<endl;


    return 0;
}
