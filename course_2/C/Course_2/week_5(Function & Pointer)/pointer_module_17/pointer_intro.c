#include<stdio.h>
int main()
{
    int a =100; // this is a variable;
    int* poi = &a;  //this is a pointer; that's point the location of a;
    printf("%lld is the location, %d is the value\n", &a, a);
    printf("%p is the location, %d is the value\n", &a, a);


    printf("this is the location of pointer = %p  this is the value of pointer = %d\n", poi, *poi);
    printf("this is the location of pointer = %lld  this is the value of pointer = %d", poi, *poi);

//    a === *poi; location
//    &a === poi; value

    int value2 = 200;
    poi = &value;  // change the pointer value;
}
