#include<stdio.h>

int main(){
    int A, B, sum;
    scanf("%d %d", &A, &B);
    sum = A + B;

    if(sum >= 10){
        printf("error");
    }else{
        printf("%d", sum);
    }
    return 0;
}
