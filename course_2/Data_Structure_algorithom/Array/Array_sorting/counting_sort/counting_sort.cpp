#include<bits/stdc++.h>
using namespace std;

void counting_sort(int a, int arr[])
{
    int maxNum =arr[0];

    //finding max number
    for(int j=1; j<a; j++)
    {
        if(arr[j]>maxNum)
        {
            maxNum=arr[j];
        }
    }

    // frequency array
    int frequencyArr[maxNum+1]={0};
    for(int j=0; j<a; j++)
    {
        frequencyArr[arr[j]]++;
    }


    //create prefix sum
    for(int j=1; j<=maxNum+1; j++)
    {
        frequencyArr[j]+=frequencyArr[j-1];
    }

    //final is the sorted array
    int finalArr[a];
    for(int j=a-1; j>=0; j--)
    {
        frequencyArr[arr[j]]--;
        int k= frequencyArr[arr[j]];
        finalArr[k]=arr[j];
    }

    for(int j=0; j<a; j++)
    {
        arr[j]=finalArr[j];
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

    counting_sort(n, n_arr); //call the sorting function

    for(int j=0; j<n; j++)
    {
        cout<<n_arr[j]<<" ";
    }
}
