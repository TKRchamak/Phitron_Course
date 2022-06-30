#include<stdio.h>
#include<string.h>

int main()
{
    char n[17];
    scanf("%s", &n);
    int len = strlen(n);

    if(len==1)
    {
        if(n[0]=='0')
        {
            printf("01");
        }
        else if(n[0]=='1')
        {
            printf("05");
        }
        else
        {
            printf("25");
        }
    }
    else
    {
        printf("25");
    }
    return 0;
}
