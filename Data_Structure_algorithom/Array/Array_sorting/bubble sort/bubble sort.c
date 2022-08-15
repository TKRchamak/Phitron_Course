#include<stdio.h>

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
        int flag=0;
        for(int k=0; k<a-j; k++) // a==total size,  j is the current value, redundant testing problem.
        {
            if(arr[k-1] > arr[k])
            {
                swap(&arr[k-1], &arr[k]); // call for swipe function
                flag=1;
            }
        }
        if(flag==0) break;
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

    bubble_sort(n, n_arr); //call the sorting function

    for(int j=0; j<n; j++)
    {
        printf("%d ", n_arr[j]);
    }
}
