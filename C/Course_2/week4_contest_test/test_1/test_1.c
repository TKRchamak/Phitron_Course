#include<stdio.h>
#include<string.h>
int main(){
    char str[101];
    scanf("%s", str);

    int freq[230]={0}, count=0;
    int len = strlen(str);

    for(int i=0; i<len; i++){
        int d= str[i];
        freq[d]=1;
    }

    for(int j=97; 97<=j && 122>=j; j++){
        if(freq[j] > 0){
            count++;
        }
    }

    if((count%2) == 0){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }
return 0;
}
