#include<stdio.h>
int main(){
    int num=0, a=0, b=0, c=0, i, j, k;
    scanf(" %d", &num);
    c= num%10;
    num = (num-c)/10;
    b= num%10;
    num = (num-b)/10;
    a= num%10;

    i = (((a*10)+b)*10) +c;
    j = (((b*10)+c)*10) +a;
    k = (((c*10)+a)*10) +b;

    int total = i+j+k;
    printf("%d", total);

return 0;
}
