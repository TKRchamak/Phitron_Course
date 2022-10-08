#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin>>y;

    long long int ans=1;
    for(int i=1;i<y-1;i++)
    {
        ans= ans+ans;
    }

    long long int res = pow(2,(y-1))*ans;
    cout<<res;

    return 0;
}
