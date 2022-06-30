#include<stdio.h>

char craeateChar(int num, double longF)
{
    char ch = num + (int)longF;
    return ch;
}

int main()
{
    int number;
    double longNum;
    scanf("%d %lf", &number, &longNum);
    char ch= craeateChar(number, longNum);
    printf("%c", ch);

    return 0;
}
