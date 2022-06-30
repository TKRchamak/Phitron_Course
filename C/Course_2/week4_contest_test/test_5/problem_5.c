#include<stdio.h>
#include<stdbool.h>
int main(){
    int n, a=0, e=0, i=0, o=0, u=0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    int freq[130]={0};
    for(int i=0; i<n; i++){
        int d = str[i];
        freq[d]=1;
//        printf("%d ", d);
    }
    bool have = true;
    for(int i=65, j=97; i<=90, j<=122; i++, j++){
        if(freq[i]==1 || freq[j]==1){
            continue;
        }else{
            have = false;
            break;
        }
//        printf("%d ----> %d\t %d ----> %d \n", i, freq[i], j, freq[j]);
    }
    if(!have){
        printf("NO");
    }else{
        printf("YES");
    }
return 0;
}
