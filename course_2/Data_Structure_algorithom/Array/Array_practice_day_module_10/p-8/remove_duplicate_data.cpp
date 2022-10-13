#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, maxNum=0, countNum=0;
    cin>>num;
    int num_arr[num];
    for(int i=0; i<num; i++)
    {
        cin>>num_arr[i];
        if(num_arr[i]>maxNum)
        {
            maxNum=num_arr[i];
        }
    }

    int frequncy_Arr[maxNum+1]= {0};

    for(int i=0; i<num; i++)
    {
        int currNum = num_arr[i];

        if(frequncy_Arr[currNum]==0)
        {
            frequncy_Arr[currNum]++;
        }
        else
        {
            for(int j=i; j<num-1; j++)
            {
                num_arr[j]=num_arr[j+1];
            }
            num--;
            i--;
        }
    }

    for(int i=0; i<num; i++)
    {
        cout<<num_arr[i]<<" ";
    }

    return 0;
}
