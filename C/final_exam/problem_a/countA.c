#include<stdio.h>

int main()
{
    int n=0, num;

    while(n!=1)
    {
        scanf("%d", &num);
        if(num==42)
        {
            break;
        }else
        {
            printf("%d\n", num);
        }
    }

    return 0;
}
