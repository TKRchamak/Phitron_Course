#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char arr[n][101];
    char result[n][101];

    for(int i=0; i<n; i++)
    {
        scanf("%s", arr[i]);
//        int len = strlen(arr[i]);
//        char carr = arr[i][0];
//        result[i][0] = carr;
//        for(int j=1; j<len; j++)
//        {
//            int resLen = strlen(result[i]);
//            if(arr[i][j-1] != arr[i][j])
//            {
//               result[i][resLen] = arr[i][j];
//            }
//        }
//        int resLen = strlen(result[i]);
//        result[i][resLen] = '\0';
    }

    for(int i=0; i<n; i++)
    {
        printf("%s\n", arr[i]);
    }

    return 0;
}
