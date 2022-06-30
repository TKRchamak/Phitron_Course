#include<stdio.h>
#include<stdbool.h>

int main(){
    int year;
    scanf("%d", &year);

    for(int i=year+1;  ; i++){
        int currY = i;
        bool have = false;
        int freq[10] = {0};
        while(currY > 0){
            int d = currY%10;
            freq[d]++;
            currY/=10;
            if(freq[d] >=2){
                have = true;
            }
        }
        if(!have){
            printf("%d", i);
            break;
        }
    }

}
