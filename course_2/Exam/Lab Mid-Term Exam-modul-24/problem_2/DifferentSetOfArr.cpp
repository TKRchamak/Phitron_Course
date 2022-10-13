#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int Narr[n]= {0};
    for(int i=0; i<n; i++)
    {
        cin>>Narr[i];
    }

    cin>>m;
    int Marr[m]= {0};
    for(int i=0; i<m; i++)
    {
        cin>>Marr[i];
    }

    for(int i=0; i<n; i++)
    {
        int flag=0;
        int currNum=Narr[i];

        for(int j=0; j<m; j++)
        {
            if(currNum==Marr[j])
            {
                flag=1;
            }
        }

        if(flag==0)
        {
            cout<<currNum<<" ";
        }
    }

    return 0;
}
