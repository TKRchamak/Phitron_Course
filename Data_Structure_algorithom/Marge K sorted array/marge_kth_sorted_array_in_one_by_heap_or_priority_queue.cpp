#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>PAIR;

int main()
{
    int k;
    cin>>k;

    vector<vector<int>> allvalus(k);

    for(int i=0;i<k;i++)
    {
        int size;
        cin>>size;
        allvalus[i]=vector<int>(size);
        for(int j=0;j<size;j++)
        {
            cin>>allvalus[i][j];
        }
    }
    vector<int> indexTracker(k,0);

    priority_queue<PAIR, vector<PAIR>, greater<PAIR> >pq;

    for(int i=0;i<k;i++)
    {
        pq.push(make_pair(allvalus[i][0],i));
    }

    vector<int> ans;

    while(!pq.empty())
    {
        PAIR x= pq.top();
        pq.pop();
        ans.push_back(x.first);

        if(indexTracker[x.second]+1 < allvalus[x.second].size()) //increment position valid check
        {
            pq.push(make_pair((allvalus[x.second][indexTracker[x.second]+1]), x.second));
            // we r creating a pair : ( increment position value, increment position array identity
            // then push in pq
        }
        indexTracker[x.second]+=1;
    }

    for(auto element:ans)
    {
        cout<<element<<" ";
    }

    return 0;
}
