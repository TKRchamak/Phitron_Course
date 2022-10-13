#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){
    int x;
    scanf("%d", &x);

    for(int i=0; i<x; i++){
        char str[101];
        scanf("%s", str);


        int len = strlen(str);

        if(len <= 10){
            printf("%d\n", len);
//            printf("%s\n", str);
        }else{
//            printf("%d\n", len);
            printf("%c%d%c\n", str[0], len-2, str[len-1]);
        }
    }
}
