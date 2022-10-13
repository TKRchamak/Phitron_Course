#include<stdio.h>
#include<math.h>

int main()
{
    int n, k, num=1;
    scanf("%d %d", &n, &k);

    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            num+=1;
        }
        else
        {
            if(num > k)
            {
                num=num+k;
            }
            else
            {
                int powNum = num*2;
                num=powNum;
            }

        }
    }

    printf("%d", num);

    return 0;
}
