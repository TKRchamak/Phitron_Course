#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d", &n);
    int resArr[n];

    for(int i=0; i<n; i++)
    {
        int m, count=-1;
        int freq[200001]= {0};
        scanf("%d", &m);
        for(int j=1; j<=m; j++)
        {
            int p;
            scanf("%d", &p);
            freq[p]++;

            if(freq[p]>2)
            {
                count=p;
            }
            resArr[i]=count;
        }
    }


    for(int i=0; i<n; i++)
    {
        printf("%d\n", resArr[i]);
    }
    return 0;
}
