#include<stdio.h>
#include<string.h>

int main()
{
    char take_str[1001];
    fgets(take_str,1001,stdin);
    int lenTake=strlen(take_str), count=0;

    char sub_str[] ="heidi";
    int len=strlen(sub_str);

    if(lenTake >= len)
    {
        for(int j=0; j<lenTake; j++)
        {
            if(take_str[j] == sub_str[count])
            {
                count++;
            }
        }

        if(count == len)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }

    return 0;
}
