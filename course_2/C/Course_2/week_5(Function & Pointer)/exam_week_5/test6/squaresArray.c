#include<stdio.h>
void makeNArray(int n, int squares[])
{
    for(int i=0; i<n; i++)
    {
        int num = i+1;
        int sqr = num*num;
        squares[i] = sqr;
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    int squares[n];
    makeNArray(n, squares);
    for(int i=0; i<n; i++)
    {
        printf("%d ", squares[i]);
    }
}
