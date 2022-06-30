#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    char numbers[20]={0};
    scanf("%s", numbers);
    int len = strlen(numbers);
    int count = 0;

    bool have = true;
    for(int i=0; i<len; i++){
        if(numbers[i]=='7' || numbers[i]=='4'){
            count++;
        }else{
            continue;
        }
    }

    if(count==7 || count==4){
        printf("YES");
    }else{
        printf("NO");
    }

return 0;
}
