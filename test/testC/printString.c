#include<stdio.h>

int main()
{
    char ch, s[100], sen[100];
    scanf("%c", &ch);
    scanf("%s\n", s);
    fgets(sen, sizeof(sen), stdin);

    printf("%c", ch);
    printf("\n");
    printf("%s", s);
    printf("\n");
    puts(sen);

    return 0;
}
