#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
        int count=0, arr[m], arr2[m];

        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[j]);
        }

        for(int j=0,k=(m-1); j<=k ;j++,k--)
        {
            arr2[count]=arr[j];
            count++;
            arr2[count]=arr[k];
            count++;
        }

        for(int j=0;j<m;j++)
        {
            printf("%d ",arr2[j]);
        }

        printf("\n");
    }

    return 0;
}
