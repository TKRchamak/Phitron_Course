#include<stdio.h>
#include<string.h>

int main()
{
    char n[100];
    scanf("%s", &n);
    int len = strlen(n);

    for(int i=0; i<len; i++)
    {
        if((i%2)==0)
        {
            for(int j=0; j<len; j++)
            {
                if((j%2)==0)
                {
                    if(n[i]<n[j])
                    {
                        char temp=n[i];
                        n[i]=n[j];
                        n[j]=temp;
                    }
                }
            }

        }
    }

    printf("%s", n);
    return 0;
}
