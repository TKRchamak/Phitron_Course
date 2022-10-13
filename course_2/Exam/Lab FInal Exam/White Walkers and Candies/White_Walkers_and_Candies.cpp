#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    for(int i=0; i<T; i++)
    {
        int N, C, res=0;
        cin>>N>>C;
//        vector<int> v(0);

        for(int j=0; j<N; j++)
        {
            int temp;
            cin>>temp;
            res=res+(2*temp);
        }

        if(res<=C)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

//        for(auto element: v)
//        {
//
//        }
    }
    return 0;
}
