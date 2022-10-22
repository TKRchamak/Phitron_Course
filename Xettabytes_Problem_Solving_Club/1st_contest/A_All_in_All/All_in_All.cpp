#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("text.txt", "r", stdin);
    string a,b;
    int i,j,flag;
    while(cin>>a>>b)
    {
        flag=0;
        j=0;
        for(i=0; i<a.size(); i++)
        {
            for(; j<b.size(); j++)
            {
                if(a[i]==b[j])
                {
                    if(i==a.size()-1)
                        flag=1;
                    break;
                }
            }
            j++;
        }
        if(flag==1) cout<<("Yes\n");
        else cout<<("No\n");
    }
    return 0;
}
