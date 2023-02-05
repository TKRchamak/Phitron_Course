#include<bits/stdc++.h>
#define pub push_back

using namespace std;
const int N = 1e5; // 1e5 ---->10,000
bool visited_array[N];
vector<int> graph[N];  // akta array nibo jeta te voctor thakbe

void dfs(int head)
{
    memset(visited_array, false, sizeof(visited_array));

    stack<int> st;
    st.push(head);

    while(!st.empty())
    {
        int curr = st.top();
        st.pop();
        if(visited_array[curr] == true) continue;

        cout<<curr<<endl;
        visited_array[curr] = true;

        for(int i=0; i<graph[curr].size(); i++)
        {
            if(visited_array[graph[curr][i]] == false)
            {
                st.push(graph[curr][i]);
            }
        }
    }

}

int main()
{
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0;i<edges; i++)
    {
        int x, y;
        cin>>x>>y;
        graph[x].pub(y);
        graph[y].pub(x);
    }

    dfs(1);

    return 0;
}

//5 5
//
//0 1
//0 2
//1 3
//1 4
//3 4


//6 8
//
//1 5
//1 4
//5 0
//5 4
//4 0
//4 2
//0 2
//2 3

