#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,u;
        cin>>n>>u;
        int arr[n]={0};

        while(u--)
        {
            int l,r,v;
            cin>>l>>r>>v;
            for(int i=l;i<=r;i++)
            {
                arr[i]=arr[i]+v;
            }
        }


        int q;
        cin>>q;

        while(q--)
        {
            int i;
            cin>>i;
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}
