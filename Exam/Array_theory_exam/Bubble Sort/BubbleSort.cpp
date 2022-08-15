#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int a, int arr[])
{
    for(int j=0; j<a; j++)
    {
        cout<<j+1<<"st iteration: "<<endl;
//        cout<<j+1<<"st step: ";
//        for(int j=0; j<a; j++)
//        {
//            cout<<arr[j]<<" ";
//        }

        int flag=0;
        for(int k=0; k<a-j; k++) // a==total size,  j is the current value, redundant testing problem.
        {
            if(arr[k-1] > arr[k])
            {
                swap(&arr[k-1], &arr[k]); // call for swipe function
                flag=1;
            }

            cout<<j+1<<"st step: ";
            for(int j=0; j<a; j++)
            {
                cout<<arr[j]<<" ";
            }
            cout<<endl;

        }
        if(flag==0) break;

//        cout<<"->";
//        for(int j=0; j<a; j++)
//        {
//            cout<<arr[j]<<" ";
//        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int n_arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>n_arr[i];
    }

    bubble_sort(n, n_arr); //call the sorting function

    return 0;
}
