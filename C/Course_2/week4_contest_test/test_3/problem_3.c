#include<stdio.h>
#include<string.h>
int main(){
    int n, count = 0;
    scanf("%d",&n);
    char str[n];
    scanf("%s", str);
    int d = str[0];
    for(int i=1;i<n;i++){
        int cD = str[i];
        if(d==cD){
            count++;
        }else{
            d=str[i];
        }
    }
    printf("%d\n", count);
return 0;
}
