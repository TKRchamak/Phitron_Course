#include<stdio.h>
int main(){
    int A=0, B=0, C=0, D=0, E=0, F=0, X=0;
    scanf("%d" "%d" "%d" "%d" "%d" "%d" "%d", &A, &B, &C, &D, &E, &F, &X);
    int i=0, t1=0, t2=0, m1=0, m2=0;
    while(i < X){
        if(t1 < A){
            m1+=B;
            t1++;
        }else if(t1 >=A && t1 <(A+C)){
            t1++;
        }else{
            m1+=B;
            t1 = 1;
        }

        if(t2 <D){
            m2+=E;
            t2++;
        }else if(t2 >=D && t2 <(D+F)){
            t2++;
        }else{
            m2+=E;
            t2 = 1;
        }
        i++;
    };

    if(m1 > m2){
        printf("Takahashi");
    }else if(m1 == m2){
        printf("Draw");
    }else{
        printf("Aoki");
    }

return 0;
}
