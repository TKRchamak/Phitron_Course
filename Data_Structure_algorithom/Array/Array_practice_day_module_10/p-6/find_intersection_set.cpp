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
    }

    int num2;
    cin>>num2;
    int num_arr2[num2];
    for(int i=0; i<num2; i++)
    {
        cin>>num_arr2[i];
    }

    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num2; j++)
        {
            if(num_arr[i]==num_arr2[j])
            {
                fastGet=1;
                cout<<num_arr[i]<<" ";
            }
        }
    }

    if(fastGet==0)
    {
        cout<<"Empty set";
    }

    return 0;
}
