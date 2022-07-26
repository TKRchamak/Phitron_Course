#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sz_arr;
    cin>>sz_arr;
    int num_arr[sz_arr];
    for(int i=0; i<sz_arr; i++)
    {
        cin>>num_arr[i];
    }

    for(int i=0,j=sz_arr-1; i<j; i++,j--)
    {
        int tamp =num_arr[i];
        num_arr[i]=num_arr[j];
        num_arr[j]=tamp;
    }

    for(int i=0; i<sz_arr; i++)
    {
        cout<<num_arr[i]<<" ";
    }

    return 0;
}
