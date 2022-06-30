#include<stdio.h>
int main()
{
    char s[100000];
    int l, r;
    scanf("%d %d %s", &l, &r, &s);
    for(int i=(l-1), j=(r-1); i<j; i++, j--)
    {
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }

    printf("%s", s);
    return 0;
}
