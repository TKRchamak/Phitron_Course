#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("text.txt", "r", stdin);
    string a;
    string b;
    int flag=0;

    while(cin>>a>>b)
    {
        int j=0;
        string str = "";
        for(int i=0; i<a.length(); i++)
        {
            for(j; j<b.length(); j++)
            {
                if(b[j]==a[i])
                {
                    str+=b[j];
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout<<"\n";
        }
        if(str == a)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
        flag=1;
    }

    return 0;
}
