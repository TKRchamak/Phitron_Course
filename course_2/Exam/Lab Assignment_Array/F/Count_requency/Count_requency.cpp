#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c, countNum=1;
    cin>>a>>b>>c;
    if(a!=b)
    {
        countNum++;
    }
    if(b!=c &&c!=a)
    {
        countNum++;
    }

    cout<<countNum;
    return 0;
}
