#include<bits/stdc++.h>
#include"myQueue.h"
using namespace std;

typedef pair <int, int> mypair;

int main()
{
    Queue<mypair>que;

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int c1, c2;
        cin>>c1>>c2;
        que.push(make_pair(c1,c2));
    }

//    while(!que.empty())
//    {
//        mypair tempVal=que.pop();
//        cout<<tempVal.first<<" | "<<tempVal.second<<endl;
//    }

    mypair tempVal=que.Front();
    cout<<tempVal.first<<" | "<<tempVal.second<<endl;
    mypair tempVal2=que.Back();
    cout<<tempVal2.first<<" | "<<tempVal2.second<<endl;


    return 0;
}
