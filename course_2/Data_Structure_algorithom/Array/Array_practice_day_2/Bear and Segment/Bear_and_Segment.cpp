#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    string str_arr[num];
    for(int i=0; i<num; i++)
    {
        cin>>str_arr[i];
    }

    for(int i=0; i<num; i++)
    {
        int len=str_arr[i].length();
        int get=0;
        for(int j=0; j<len; j++)
        {
            if(str_arr[i][j]=='1' && get==0)
            {
                get=1;
            }
            else if(str_arr[i][j]=='1' && get==1)
            {
                if(str_arr[i][j-1]=='0' && get==1)
                {
                    get=0;
                    break;
                }
            }
        }
        if(get==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
