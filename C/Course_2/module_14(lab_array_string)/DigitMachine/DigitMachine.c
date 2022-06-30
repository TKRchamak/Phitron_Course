#include<stdio.h>

int main(){
    int numberArray[10]= {0};

    for(int i=0; i<10; i++){
        scanf("%d", &numberArray[i]);
    }

    int takenNum = 0;
    for(int i=0; i<3; i++){
        takenNum = numberArray[takenNum];
    }
    printf("%d", takenNum);
    return 0;
}
