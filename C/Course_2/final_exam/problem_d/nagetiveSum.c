#include<stdio.h>
int main()
{
    int n, m, i=0, count=0, sum=0;

    scanf("%d %d", &n, &m);

    int arr[n];

    for(int k=0;k<n;k++)
    {
        int curr;
        scanf("%d", &curr);
        if(curr < 0)
        {
            arr[count]=(curr*(-1));
            count++;
        }
    }

    for(int j=0; j<count; j++)
    {
        for(int k=0; k<count; k++)
        {
            if(arr[j]>arr[k])
            {
                int temp = arr[j];
                arr[j]= arr[k];
                arr[k]=temp;
            }
        }
    }


    if(count>m)
    {
        for(int i=0; i<m; i++)
        {
            sum = arr[i]+sum;
        }
    }
    else
    {
        for(int i=0; i<count; i++)
        {
            sum = arr[i]+sum;
        }
    }

    printf("%d", sum);

    return 0;
}
