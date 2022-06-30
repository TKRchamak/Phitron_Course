#include<stdio.h>
int main(){
    int n=0, i=1;
    scanf("%d", &n);

    while(i<=n){
        if((i%2 == 0) && (i == n) ){
            printf("I love it");
        }else if((i%2 != 0) && (i == n) ){
            printf("I hate it ");
        }else if(i%2 == 0){
            printf("I love that ");
        }else if(i%2 != 0){
            printf("I hate that ");
        }
        i++;
    }
return 0;
}
