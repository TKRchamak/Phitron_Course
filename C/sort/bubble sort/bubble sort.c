#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int a, int arr[])
{
    for(int j=0; j<a; j++)
    {
        for(int k=1; k<a; k++)
        {
            if(arr[k-1] > arr[k])
            {
            swap(&arr[k-1], &arr[k]);
            }
        }
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
    sort(n, n_arr);

    for(int j=0; j<n; j++)
    {
        printf("%d ", n_arr[j]);
    }
}
