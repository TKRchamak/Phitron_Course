#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, fastGet=0;
    cin>>num;
    int num_arr[num];
    for(int i=0; i<num; i++)
    {
        cin>>num_arr[i];
        if(num_arr[i]%3==0)
        {
            num_arr[i]=-1;
        }
    }

    for(int i=0; i<num; i++)
    {
        cout<<num_arr[i]<<" ";
    }

    return 0;
}
