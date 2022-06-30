#include<stdio.h>
#include<string.h>

int main(){
    int howMany;
    scanf("%d", &howMany);

    int number[howMany];
    for(int i=0; i<howMany; i++){
        scanf("%d", &number[i]);
    }
    printf("\n");

    for(int i=0, j=howMany-1; i<j; i++, j--){
        int store = number[i];
        number[i] = number[j];
        number[j] = store;
    }

    for(int i=0; i<howMany; i++){
        printf("%d ", number[i]);
    }
return 0;
}
