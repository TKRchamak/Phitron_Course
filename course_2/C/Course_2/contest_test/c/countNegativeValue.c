#include<stdio.h>
int main(){
    int number = 0, count = 0;

    scanf("%d", &number);

    int takenNum = 0;
    int arr[100000]= {};
    for(int i=0; i<number; i++){
        scanf("%d", &takenNum);
        arr[i]=takenNum;
    }

    for(int i=0; i<number; i++){
        if(arr[i] < 0){
            count++;
        }
    }

    printf("%d", count);
}
