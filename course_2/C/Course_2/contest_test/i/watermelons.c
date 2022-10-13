#include<stdio.h>

int main(){
    int numberOf_input = 0;
    int arr[3] = {};
    for(int i=0; i<3; i++){
        scanf("%d", &arr[i]);
    }

    int sumF = arr[0] + arr[1];
    int sumS = arr[1] + arr[2];
    int sumT = arr[2] + arr[0];

    if(sumF < sumS && sumF < sumT){
        printf("%d\n", sumF);
    }else if( sumS < sumT){
        printf("%d\n", sumS);
    }else{
        printf("%d\n", sumT);
    }
return 0;
}


//    for(int i=0; i<2; i++){
//        if(arr[i]> arr[i+1]){
//            int tem = arr[i];
//            arr[i]= arr[i+1];
//            arr[i+1]= tem;
//        }
//    }
