#include<stdio.h>

int main()
{
    int n, sum=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int j=0,k=n-1; j<k; j++,k--)
    {
        int dami=arr[j];
        arr[j] = arr[k];
        arr[k]= dami;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
