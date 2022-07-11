#include<stdio.h>

int main()
{
    int n=0, i=0;
    char str[50];
    scanf("%s", &str);

    while(str[i]!='\0')
    {
        if(str[i]=='a')
        {
            n++;
        }
        i++;
    }

    int len = ((2*n)-1);

    if(len>i)
    {
        printf("%d",i);
    }
    else
    {
        printf("%d",len);
    }

    return 0;
}
