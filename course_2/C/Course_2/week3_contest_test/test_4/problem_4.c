#include<stdio.h>
int main(){
    int n, i=0, A=0, D=0;
    scanf("%d", &n);
    char l;
    while(i <= n){
        scanf("%ch", &l);
        if(l == 'A'){
            A++;
        }
        if(l == 'D'){
            D++;
        }
        i++;
    };

    if(A == D){
        printf("Friendship");
    }else if(A < D){
        printf("Danik");
    }else if(A > D){
        printf("Anton");
    }

return 0;
}
