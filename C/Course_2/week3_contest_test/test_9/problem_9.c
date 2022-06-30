#include<stdio.h>
int main(){
    int X=0, i;
    scanf("%d", &X);

    if(0<=X && 40>X){
        i = 40-X;
        printf("%d", i);
    }else if(40<=X && 70>X){
        i = 70-X;
        printf("%d", i);
    }else if(70<=X && 90>X){
        i = 90-X;
        printf("%d", i);
    }else if(90<=X && 100>=X){
        printf("expert");
    }

return 0;
}
