#include<stdio.h>
int main(){
    int N, K, A;   // N people numbered, K gifts, Staring with Person A

    scanf("%d %d %d", &N, &K, &A);
    int i = 1;
    while(i < K){
        A++;
        if(A>N){
            A = 1;
        }
        i++;
    }
    printf("%d", A);

return 0;
}
