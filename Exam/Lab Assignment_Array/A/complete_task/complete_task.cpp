#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i_num=4, countNum=0;
    int int_arr[4];

    for(int i=0;i<i_num;i++)
    {
        cin>>int_arr[i];
        if(int_arr[i]>=10)
        {
            countNum++;
        }
    }
    cout<<countNum;
    return 0;
}
