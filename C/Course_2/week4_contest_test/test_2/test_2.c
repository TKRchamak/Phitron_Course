#include<stdio.h>
int main(){
    int n, maxNum=0;
    scanf("%d", &n);
    int arr[n], count=0;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i] == maxNum){
            continue;
        }else if(arr[i] < maxNum){
            count+= (maxNum-arr[i]);
        }
    }

    printf("%d", count);
return 0;
}
