#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sz_arr, sum=0;
    cin>>sz_arr;
    int num_arr[sz_arr];
    for(int i=0;i<sz_arr;i++)
    {
        cin>>num_arr[i];
        sum+=num_arr[i];
    }

    cout<<sum<<endl;
    return 0;
}
