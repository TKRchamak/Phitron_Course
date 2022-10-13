#include<stdio.h>
int main(){
    int m=0, n=0, i=1;
    scanf("%d %d", &m, &n);
    while(i<=m){
        if(i%2==0){
            if((i/2) % 2 == 0){
                for(int j=1; j <= n; j++){
                    if(j==1){
                        printf("#");
                    }else{
                        printf(".");
                    }
                }
                printf("\n");
                i++;
            }else{
                for(int j=1; j <= n; j++){
                    if(j==n){
                        printf("#");
                    }else{
                        printf(".");
                    }
                }
                printf("\n");
                i++;
            }
        }else{
            for(int j=1; j <= n; j++){
            printf("#");
            }
            printf("\n");
            i++;
        }
    }

return 0;
}
