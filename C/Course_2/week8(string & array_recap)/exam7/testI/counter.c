#include<stdio.h>
#include<string.h>

int main()
{
    int n, one_counter=0, zero_counter=0;
    scanf("%d", &n);
    int len = n+1;
    char str[len];
    scanf("%s", &str);
    str[len]='\0';

//    int len= strlen(str), count=1;
//
    for(int i=0; i<n; i++)
    {
        if(str[i] == 'n')
        {
            one_counter++;
        }
        if(str[i] == 'z')
        {
            zero_counter++;
        }
    }

    for(int j=0;j<(one_counter+zero_counter); j++)
    {
        if(one_counter>j)
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }

    return 0;
}
