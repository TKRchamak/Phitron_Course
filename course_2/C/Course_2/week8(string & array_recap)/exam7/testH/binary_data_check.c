#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    fgets(str,100,stdin);
//    puts(str);

    int len= strlen(str), count=1;

    for(int i=1; i<len-1; i++)
    {
        if(str[i-1]==str[i])
        {
            count++;

            if(count==7)
            {
                printf("YES\n");
                break;
            }
        }
        else
        {
            count = 1;
        }
    }
    if(count<7)
    {
        printf("NO\n");
    }

    return 0;
}
