#include<stdio.h>
int doubleNum(int num)
{
    num = 2*num;
    return num;
}

int main()
{
    int number;
    scanf("%d", &number);
    number = doubleNum(number);
    printf("%d", number);

    return 0;
}
