#include<stdio.h>

struct Student
{
    char name[100];
    int id;
    char dep[5];
    int roll;
    int mark
};

void print_str(struct Student greate, FILE *output_file)
{
    fprintf(output_file, "%s %d %s %d %d\n",greate.name,greate.id,greate.dep,greate.roll,greate.mark);
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

    FILE *input_file;
    FILE *output_file;
    FILE *log_file;
    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w");
    log_file = fopen("log.txt", "a");

    if(input_file == NULL)
    {
        fprintf(log_file,"Input File Not Found\n");
        printf("Input File Not Found");
        return 0;
    }


//    struct Student b={"tonmoy", 2, "ece", 63, 40};
//    fun2(&b);
//    print_str(b);


    int n;
    fscanf(input_file, "%d", &n);
    struct Student a[n];

    struct Student greate= {.mark=0};

    for(int i=0; i<n; i++)
    {
        fscanf(input_file, "%s %d %s %d %d",&a[i].name, &a[i].id, &a[i].dep, &a[i].roll, &a[i].mark);
    }

    fun(a);

    for(int i=0; i<n; i++)
    {
//        find_biggest_mark(&a[i], &greate);
        print_str(a[i], output_file);
    }


    fclose(input_file);
    fclose(output_file);
    fclose(log_file);

    return 0;
}
