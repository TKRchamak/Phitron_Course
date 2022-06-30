#include<stdio.h>
int main(){
    int S, T, X, value;
    scanf("%d %d %d", &S, &T, &X);
    if(S == T && 0<=X && 24>X){
        printf("Yes \n");
    }else{
        if(S < T && S <= X && T>X){
            printf("Yes \n");
        }else if(S>T && ((S<=X && 24>X) || (0<=X && T>X))){
            printf("Yes \n");
        } else{
            printf("No \n");
        }
//        while(S != T+1){
//            printf("%d \t %d \n", S, T);
//            if(S == X){
//                printf("Yes \n");
//                break;
//            }else{
//                if(S == T){
//                    printf("No \n");
//                }
//            }
//            (S == 23)? S=0: S++;
//        }
    }

return 0;
}
