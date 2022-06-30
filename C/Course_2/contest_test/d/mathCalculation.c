#include<stdio.h>
#include<math.h>

int main(){
    int number = 0;
    scanf("%d", &number);

    float number1 = 0, number2 = 0, mult = 0, sum = 0;

    for(int i=0; i<number; i++){
        scanf("%f" "%f", &number1, &number2);
        mult = number1*number2;
        sum += mult;
    }
    printf("%.3f", sum);
}
