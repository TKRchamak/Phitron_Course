#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);

        int strLen = n+1;

        char s[strLen];
        scanf("%s", &s);

        s[strLen] = '\0';

        if(n<=10)
        {
            printf("NO\n");
        }
        else
        {
            int j=0, start=0, count=0;
            while(s[j]!='\0')
            {
                if((s[j]-48)==8 || start==1)
                {
                    start=1;
                    count++;
                }
                j++;
            }
            if(count<=10)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
    }
    return 0;
}

