#include<stdio.h>
#include<string.h>

void change_array(int arr1[], int len, int arr2[])
{
    for(int i=0, j=len-1; i<len; i++, j--)
    {
        arr2[i] = arr1[j];
    }

    for(int i=0; i<len; i++)
    {
        printf("%d ",arr2[i]);
    }
}

int main()
{
    int arr1[] = {1,2,3,4,5,6,7,8,9};
    int len = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[len];
    change_array(arr1, len, arr2);

    return 0;
}


