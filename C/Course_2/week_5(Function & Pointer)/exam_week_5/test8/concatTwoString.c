#include<stdio.h>
#include<string.h>

void takeInput(int *pa, int *pb)
{
    scanf("%d %d", &*pa, &*pb);
}
void stringCat(char a[], char b[], char out[]){
    strcpy(out, a);
    strcat(out, b);
}

int main()
{
    char a[50], b[50], out[200];
    scanf("%s", a);
    scanf("%s", b);
    stringCat(a, b, out);

    printf("%s", out);
}
