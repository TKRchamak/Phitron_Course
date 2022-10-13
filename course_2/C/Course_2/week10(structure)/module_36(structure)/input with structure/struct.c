#include<stdio.h>

int main()
{
    struct Student
    {
        char name[100];
        int id;
        char dep[5];
        int roll;
        int mark
    };

    int n;
    scanf("%d", &n);

    struct Student greate={.mark=0};
    for(int i=0;i<n;i++)
    {
        struct Student a;
        scanf("%s %d %s %d %d",&a.name,&a.id,&a.dep,&a.roll,&a.mark);
        if(a.mark > greate.mark)
        {
            greate = a;
        }
    }

    printf("%s %d %s %d %d",greate.name,greate.id,greate.dep,greate.roll,greate.mark);

    return 0;
}
