#include<bits/stdc++.h>
using namespace std;

void cusSwap(int* a, int* b)
{
    int temp = *a;
    *a =*b;
    *b=temp;
}

void printArr(int arr[], int sizeOf)
{
    for(int i=0;i<sizeOf;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void heapify(int arr[], int n, int curr)
{
    int largest = curr;
    int leftChild = (2*curr)+1;
    int rightChild = (2*curr)+2;

    printArr(arr, n);

    if(leftChild<n && arr[leftChild]<arr[largest])
    {
        largest=leftChild;
    }
    if(rightChild<n && arr[rightChild]<arr[largest])
    {
        largest=rightChild;
    }

    if(largest != curr)
    {
        cusSwap(&arr[curr], &arr[largest]);
        heapify(arr, n, largest);
    }
}



void sortHeap(int arr[], int n)
{
    for(int i=n-1; i>=0;i--)
    {
        cusSwap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

//    printArr(arr, n);

//    heapify
    int nonLeafStart = (n/2)-1;
    for(int i=nonLeafStart;i>=0;i--)
    {
        heapify(arr, n, i);
    }

//    printArr(arr, n);

    sortHeap(arr, n);
    printArr(arr, n);

    return 0;
}

//9
//2 10 1 5 4 8 3 8 7

// time complexity O(nlogn)
//space complexity n;
