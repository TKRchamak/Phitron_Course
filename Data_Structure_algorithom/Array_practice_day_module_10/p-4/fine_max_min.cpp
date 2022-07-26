#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, maxNum=0, maxIndex=0, minNum=0, minIndex=0;
    cin>>num;
    int num_arr[num];
    for(int i=0; i<num; i++)
    {
        cin>>num_arr[i];
        if(i==0)
        {
            minNum=num_arr[i];
            maxNum=num_arr[i];
        }
        else
        {
            if(num_arr[i]>maxNum)
            {
                maxNum=num_arr[i];
                maxIndex=i;
            }
            if(num_arr[i]<minNum)
            {
                minNum=num_arr[i];
                minIndex=i;
            }
        }
    }

    cout<<"Max: "<<maxNum<<", "<<"Index: "<<maxIndex<<endl;
    cout<<"Min: "<<minNum<<", "<<"Index: "<<minIndex<<endl;

    return 0;
}
