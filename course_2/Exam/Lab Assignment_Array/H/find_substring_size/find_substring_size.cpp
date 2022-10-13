#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int strlen=str.length();
    int aPoint=-1, zPoint=-1;
    for(int i=0;i<strlen;i++)
    {
        if(str[i]=='A' && aPoint==-1)
        {
            aPoint=i;
        }
        if(str[i]=='Z')
        {
            zPoint=i;
        }
    }

    int res=0;
    if(aPoint<zPoint)
    {
        res = zPoint+1-aPoint;
    }
    cout<<res;
    return 0;
}
