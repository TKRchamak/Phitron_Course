#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    scanf("%s", &s);
    int arr[10]={0};

    for(int i=0; i<strlen(s); i++)
    {
        int dami = s[i]-48;
        if(dami>=0 && dami<=9)
        {
            arr[dami]++;
        }
    }

    for(int i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
