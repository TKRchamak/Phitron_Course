#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {

        int m, res=10000;
        scanf("%d",&m);
        int arr[m];
        for(int j=0; j<m; j++)
        {
            scanf("%d",&arr[j]);
        }

        for(int j=0; j<m; j++)
        {
            for(int k=0; k<m; k++)
            {
                if(arr[j]<arr[k])
                {
                    int temp = arr[j];
                    arr[j]= arr[k];
                    arr[k]=temp;
                }
            }
        }

        for(int j=1; j<m; j++)
        {
            int temp = arr[j]-arr[j-1];
            if(res>temp)
            {
                res= temp;
            }
        }
        printf("%d\n", res);
    }
    return 0;
}

