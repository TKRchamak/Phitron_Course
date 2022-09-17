#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=10;
//    int arr[n]; //this is static memory allocation. and that is not changeable.

//    arr[n*2]; //this is not work you need to use dynamic memory allocation

    int *arr = (int*)malloc(n*sizeof(int)); //this is dynamic memory allocation by but is not set 0 in the variable;

//    int *arr = (int*)calloc(n,sizeof(int)); // this is as-like as malloc just is set 0 in the variable in creation time;

    arr=realloc(arr,n*2*sizeof(int)); //this is use to change the size of the array

    for(int i=0;i<n*2;i++)
    {
        arr[i]=10;
    }

    free(arr); // after ens the function the array is empty

    for(int i=0;i<n*2;i++)
    {
        printf("%d", arr[i]);
        printf(" ");
    }


    return 0;
}
