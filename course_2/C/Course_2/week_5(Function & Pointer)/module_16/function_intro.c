#include<stdio.h>

//void printName(char name[])
//{
//    printf("Hello %s", name);
//}

int main()
{
    int a[10];
    a[0]+=10;
    a[0]= a[0]*2;
    for(int i=0; i<10; i++)
    printf("%d\n", a[i]);
return 0;
}

