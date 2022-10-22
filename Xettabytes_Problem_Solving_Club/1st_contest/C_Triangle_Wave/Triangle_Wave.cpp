#include<bits/stdc++.h>
using namespace std;

string str[] = {"", "1", "22", "333", "4444", "55555", "666666", "7777777", "88888888", "999999999"};

int main()
{
    int t;
    cin>>t;
    cout<<"\n";

    for(int i=0; i<t; i++)
    {
        int a, f;
        cin>>a>>f;
        while(f--)
        {
            for(int i=1; i<=a; i++)
            {
                cout<<str[i]<<endl;
            }
            for(int i=a-1; i>=1; i--)
            {
                if(i!=1)
                {
                    cout<<str[i]<<endl;
                }
                else
                {
                    cout<<str[i];
                }
            }
            if(f>0)
            {
                cout<<endl<<endl;
            }
        }
    }
    return 0;
}
