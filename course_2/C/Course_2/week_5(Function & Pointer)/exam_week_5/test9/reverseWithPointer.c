#include<stdio.h>
#include<stdlib.h>

void revArr(int n, int *a)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n=10;
    int a[n];
    revArr(n, &a);
}

//int *malArr = (int*) malloc(n*sizeof(int));
