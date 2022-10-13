#include<stdio.h>

struct Student
{
    char name[100];
    int id;
    char dep[5];
    int roll;
    int mark
};

void print_str(struct Student greate)
{
    printf("%s %d %s %d %d\n",greate.name,greate.id,greate.dep,greate.roll,greate.mark);
}

void find_biggest_mark(struct Student *a, struct Student *greate)
{
    if(a->mark > (*greate).mark)
    {
        *greate = *a;
    }
}

void fun(struct Student *a)
{
    a[0].mark=100;
}

void fun2(struct Student *a)
{
    a->mark=100;
}


int main()
{


//    struct Student b={"tonmoy", 2, "ece", 63, 40};
//    fun2(&b);
//    print_str(b);


    int n;
    scanf("%d", &n);
    struct Student a[n];

    struct Student greate= {.mark=0};

    for(int i=0; i<n; i++)
    {
        scanf("%s %d %s %d %d",&a[i].name, &a[i].id, &a[i].dep, &a[i].roll, &a[i].mark);
    }

    fun(a);

    for(int i=0; i<n; i++)
    {
//        find_biggest_mark(&a[i], &greate);
        print_str(a[i]);
    }



    return 0;
}
