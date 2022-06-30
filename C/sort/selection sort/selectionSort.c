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
        int minValue = arr[j], poss = j;
        for(int k=j; k<a; k++)
        {
            if(arr[k] < minValue)
            {
                minValue =arr[k];
                poss = k;
            }
        }
        swap(&arr[j], &arr[poss]);
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
