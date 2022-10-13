#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr_size=0, maxNum=0;
    cin>>arr_size;

    int arr[arr_size]={0};

    for(int i=0;i<arr_size;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxNum) maxNum=arr[i];
    }

    int frequencyArr[maxNum+1]={0};
    for(int i=0;i<arr_size;i++)
    {
        frequencyArr[arr[i]]++;
    }

    for(int i=0;i<arr_size;i++)
    {
        if(frequencyArr[arr[i]]>0)
        {
            cout<<arr[i]<<"=>"<<frequencyArr[arr[i]]<<endl;
            frequencyArr[arr[i]]=0;
        }

    }

    return 0;
}
