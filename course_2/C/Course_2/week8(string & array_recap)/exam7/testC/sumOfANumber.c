#include<stdio.h>

int main()
{
    int a, sum=0;
    scanf("%d", &a);

    for(int i=0;i<5;i++)
    {
        int curr = a%10;
        sum+=curr;
        a/=10;
    }
    printf("%d", sum);
}
