#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);

    struct person
    {
        char family_name[20];
        char given_name[20];
    };

    struct person a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%s %s",&a[i].family_name, &a[i].given_name);
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int compFamNam = strcmp(a[i].family_name, a[j].family_name);
            int compGivNam = strcmp(a[i].given_name, a[j].given_name);
            if(compFamNam==0 && compGivNam==0)
            {
                printf("Yes ");
                return 0;
            }
        }
    }
    printf("No ");
    return 0;
}
