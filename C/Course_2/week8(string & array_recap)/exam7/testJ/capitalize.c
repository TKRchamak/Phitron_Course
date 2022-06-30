#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[101];
    scanf("%s", &str);

    int capitalize = 0;
    int fastLetterCapital=0;
//    printf("%d\n", strlen(str));

    for(int i=0; i<strlen(str); i++)
    {
        if('A'<=str[i] && 'Z'>=str[i])
        {
            capitalize++;
            if(i==0)
            {
                fastLetterCapital=1;
            }
        }
    }

    if(capitalize==strlen(str))
    {
        for(int j=0; j<strlen(str); j++)
        {
            str[j]= tolower(str[j]);
        }
        printf("%s", str);
    }else if(fastLetterCapital==0 && capitalize==(strlen(str)-1))
    {
        for(int j=0; j<strlen(str); j++)
        {
            if(j==0)
            {
                str[j]= toupper(str[j]);
            }
            else
            {
                str[j]= tolower(str[j]);
            }
        }
        printf("%s", str);
    }else
    {
        printf("%s", str);
    }

    return 0;
}
