#include<stdio.h>
int main(){
    int n, i=0, p, q, count=0;
    scanf("%d", &n);
    while(i < n){
        scanf("%d %d", &p, &q);
        if(q-p >=2){
            count++;
        }
        i++;
    }
    printf("%d", count);
return 0;
}
