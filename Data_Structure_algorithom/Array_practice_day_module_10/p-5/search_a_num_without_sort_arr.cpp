#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, searchingNum, fastGet=0;
    cin>>num;
    int num_arr[num];
    for(int i=0; i<num; i++)
    {
        cin>>num_arr[i];
    }
    cin>>searchingNum;

    for(int i=0; i<num; i++)
    {
        if(num_arr[i] == searchingNum)
        {
            if(fastGet==0)
            {
                fastGet=1;
                cout<<"FOUND at index position: "<<i;
            }
            else
            {
                cout<<", "<<i;
            }
        }
    }
    if(fastGet==0)
    {
        cout<<"NOT FOUND";
    }

    return 0;
}
