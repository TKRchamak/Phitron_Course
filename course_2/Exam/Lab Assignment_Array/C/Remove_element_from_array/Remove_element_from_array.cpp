#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a, int arr[])
{
    for(int i=1; i<a; i++)
    {
        int temp=arr[i];
        int k=i-1;
        while(k>=0 && temp<arr[k])
        {
            arr[k+1]=arr[k];
            k--;
        }
        arr[k+1]=temp;
    }
}

int main()
{
    int exequtionNum;
    cin>>exequtionNum;

    for(int i=0; i<exequtionNum; i++)
    {
        int size_of_arr;
        cin>>size_of_arr;

        int num_arr[size_of_arr];
        int total=0;

        for(int j=0; j<size_of_arr; j++)
        {
            cin>>num_arr[j];
            total+=num_arr[j];
        }

        int avarage_num=total/size_of_arr;

        insertion_sort(size_of_arr, num_arr);

        int selectedIndex=0;
        for(int j=0; j<size_of_arr; j++)
        {
            if(num_arr[j]!=num_arr[0])
            {
                selectedIndex=j;
                break;
            }
        }
        if(selectedIndex==0)
        {
            cout<<selectedIndex<<endl;
        }else
        {
            cout<<size_of_arr-selectedIndex<<endl;
        }
    }
    return 0;
}
