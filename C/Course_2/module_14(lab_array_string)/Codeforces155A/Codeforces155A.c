#include<stdio.h>
#include<stdbool.h>

int main(){
    int x;
    scanf("%d", &x);
    int numbers[x];
    for(int i; i<x; i++){
        scanf("%d", &numbers[i]);
    }
    int currentMax = numbers[0], currentMin = numbers[0];

    int awesomeNumber = 0;
    for(int i=1; i<x; i++){
        if( numbers[i] < currentMin || numbers[i] > currentMax){
            awesomeNumber++;
        }
        if(numbers[i] < currentMin){
            currentMin = numbers[i];
        }
        if(numbers[i] > currentMax){
            currentMax = numbers[i];
        }
    }
    printf("%d", awesomeNumber);
}
