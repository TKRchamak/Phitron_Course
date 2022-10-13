#include<stdio.h>
#include<string.h>

int main()
{
//    int arr[]={1,2,3,4,5};
//    int len= sizeof(arr)/sizeof(arr[0]);
//    for(int i=0,j=len-1; i<j; i++,j--)
//    {
//        int dami = arr[i];
//        arr[i]=arr[j];
//        arr[j]= dami;
//    }
//    for(int k=0; k<len; k++)
//    {
//        printf("%d", arr[k]);
//    }



//copy string;
//    void string_Copy(char a[], char b[])
//    {
//        int lenA = strlen(a);
//        int lenB = strlen(b);
//        for(int i=0; i<lenB; i++)
//        {
//            a[i]=b[i];
//        }
//        a[lenB]='\0';
//    }
//    char a[]="tonmoy";
//    char b[]="suparna";
//    string_Copy(a, b);
//    printf("%s", a);



// concat string;
//    void concat_Copy(char a[], char b[])
//    {
//        int lenA = strlen(a);
//        int lenB = strlen(b);
//
//        for(int i=lenA,j=0; i<(lenA+lenB); i++,j++)
//        {
//            a[i]=b[j];
//        }
//        a[lenA+lenB]='\0';
//    }
//    char a[]="tonmoy";
//    char b[]="suparna";
//    concat_Copy(a,b);
//    printf("%s", a);



//insert a number in arr;
//    void insertNum(int a[], int len, int pos, int num)
//    {
//        for(int i=len-2; i>=pos; i--)
//        {
//            a[i+1]=a[i];
//        }
//        a[pos]=num;
//    }
//    int numArr[] = {1,5,6,88,4,5,6};
//    int len= sizeof(numArr)/sizeof(numArr[0]);
//    insertNum(numArr, (len+1), 2, 500);
//    for(int k=0; k<len+1; k++)
//    {
//        printf("%d ", numArr[k]);
//    }



//remove a number in arr;
    void insertNum(int a[], int len, int pos)
    {
        for(int i=pos; i<len; i++)
        {
            a[i-1]=a[i];
        }
    }
    int numArr[] = {1,5,6,88,4,5,6};
    int len= sizeof(numArr)/sizeof(numArr[0]);
    insertNum(numArr, len, 2);
    for(int k=0; k<len-1; k++)
    {
        printf("%d ", numArr[k]);
    }

    return 0;
}
