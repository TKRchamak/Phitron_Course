#include<stdio.h>
#include<string.h>

int main(){
    char numbers[10];
    fgets(numbers, 10, stdin);
    int freq[10] = {0};

    for(int i=0; i<10; i++){
        char c = numbers[i];
        int digit = c- '0';
        freq[digit]++;
    }

    int result;
    for(int i=0; i<10; i++){
        if(freq[i] == 0){
            result = i;
        }
//            printf("%d -----> %d\n", i, freq[i]);
    }
    printf("%d", result);
    return 0;
}
