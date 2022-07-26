#include <bits/stdc++.h>
using namespace std;

int binary_sear(int number_arr[],int lb, int size_of_arr, int searchingNum)
{
    int ub=size_of_arr-1;
    if(lb<=ub)
    {
        int mid = (lb+ub)/2;
        if(number_arr[mid]==searchingNum) return mid;
        else if(number_arr[mid]<searchingNum) binary_sear(number_arr, mid+1, size_of_arr, searchingNum);
        else binary_sear(number_arr, 0, mid, searchingNum);
    }
    else
    {
        return -1;
    }
}

int main()
{
    int size_of_arr, searching_num;
    cout<<"Input the array size : ";
    cin>>size_of_arr;
    cout<<endl;

    int number_arr[size_of_arr];
    for(int i=0; i<size_of_arr; i++)
    {
        cin>>number_arr[i];
    }

    cout<<"Input a number for search : ";
    cin>>searching_num;

    int result = binary_sear(number_arr, 0, size_of_arr, searching_num);

    if(result != -1)
    {
        cout<<"The searching number position is : " << result+1 <<" and the index no : " <<result<<endl;
    }

    return 0;
}
