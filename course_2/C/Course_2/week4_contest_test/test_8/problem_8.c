#include<stdio.h>
int main(){
    int n=0, d=0, arr[100000]={0},  num_arr[100000]={0};
    scanf("%d %d", &n, &d);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int j=0; j<n; j++){
        if(d>n) d=d%n;
        int fre = n+j-d;
        fre = fre%n;
        num_arr[fre] = arr[j];
        printf("%d---->%d\n", j, fre);
    }
    for(int i=0; i<n; i++){
        printf("%d ", num_arr[i]);
    }

return 0;
}




