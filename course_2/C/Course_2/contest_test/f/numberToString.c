#include<stdio.h>

int main () {
    int noFive = 0, noSeven = 0;

    int arr[3] = {};
    for(int i=0; i<3; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i< 3; i++){
        switch (arr[i]) {
        case 5:
            noFive++;
            break;
        case 7:
            noSeven++;
            break;
        }
    }

    if(noFive == 2 && noSeven == 1){
        printf("YES");
    }else{
         printf("NO");
    }

    return 0;
}



