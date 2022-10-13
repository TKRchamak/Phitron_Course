#include<bits/stdc++.h>
using namespace std;


void print_array(int a, int arr[])
{
    for(int j=0; j<a; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}

void insertion_sort(int a, int arr[])
{
    for(int i=1; i<a; i++)
    {
        cout<<i<<"'th iteration :";
        int temp=arr[i];
        int k=i-1;
        while(k>=0 && temp<arr[k])
        {
            arr[k+1]=arr[k];
            k--;
        }
        arr[k+1]=temp;
        print_array(a, arr);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int n_arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &n_arr[i]);
    }

    insertion_sort(n, n_arr); //call the sorting function

    for(int j=0; j<n; j++)
    {
        cout<<n_arr[j]<<" ";
    }
}
