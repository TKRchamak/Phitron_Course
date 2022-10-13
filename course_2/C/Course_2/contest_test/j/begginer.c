#include<stdio.h>

int main(){
    int current_rating;
    scanf("%d", &current_rating);

    if(current_rating < 1200){
        printf("ABC");
    }else{
        printf("ARC");
    }
return 0;
}

