#include<stdio.h>
void takeInput(int *pa, int *pb)
{
    scanf("%d %d", &*pa, &*pb);
}
int main()
{
    int a =0, b=0;
    takeInput(&a, &b);
    printf("%d %d", a, b);
}
