#include <stdio.h>

int gcd(int a, int b)
{
    int r;
    while(a)
    {
        r=b%a;
        b=a;
        a=r;
    }
    return b;
}
int gcd_(int A[], int N)
{
    int c=gcd(A[0],A[1]);
    int i,g;
    for(i=2; i<N; i++)
    {
        g=gcd(c,A[i]);
        c=g;
    }
    return c;
}

int main()
{
    int n = 10;
    int A[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    int t=gcd_(A,n);
    printf("%d",t);
    return 0;
}
