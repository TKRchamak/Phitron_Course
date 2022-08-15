#include<bits/stdc++.h>
using namespace std;

int main()
{
    int exequtionNum;
    cin>>exequtionNum;

    for(int i=0; i<exequtionNum; i++)
    {
        int size_of_arr;
        cin>>size_of_arr;

        int num_arr[size_of_arr];
        int requency_arr[100000]={0};

        for(int j=0; j<size_of_arr; j++)
        {
            cin>>num_arr[j];
            requency_arr[num_arr[j]]++;
        }

        int max_count=0;
        for(int j=0; j<size_of_arr; j++)
        {
            if(requency_arr[num_arr[j]]>max_count)
            {
                max_count=requency_arr[num_arr[j]];
            }
        }

        cout<<size_of_arr-max_count<<endl;
    }
    return 0;
}
