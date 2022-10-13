#include<stdio.h>
int main(){
    int A=0, B=0, i;
    scanf("%d %d", &A, &B);

    if(A>B){
        printf("0");
    }else{
        i = (B-A) + 1;
        printf("%d", i);
    }

return 0;
}
