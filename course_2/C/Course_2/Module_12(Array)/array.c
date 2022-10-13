#include<stdio.h>
#include<string.h>
// gets(name) use for take input
// fgets(name, 10, stdin) use for take input data safely
// puts() for print string
// strlen(string) use for get string length

// strcpy(str2, str) str -----> str2  use for copy
// strncpy(str2, str, 7) str -----> str2  use for copy must use str2[7] = '\0'

//strcat(a, b)  it use for add two or more than word
//strncat(a, b, 9)  must use a[9] = '\0'

//strcmp(a, b) it use for compare and if it return
    // - value than a is smaller
    // + value than b is smaller
    // 0 than both are equal

int main() {
//    const int numbers[] = {1, 2, 10, 4, 5};
//
//    int sz_of_length = sizeof(numbers)/sizeof(numbers[0]);
//
//    for(int i=0; i< sz_of_length; i++){
//        printf("%d\n", numbers[i]);
//    }
//    int num_of_user;
//    scanf("%d", &num_of_user);
//    int rating_arr[num_of_user];
//
//    for(int i=0; i< num_of_user; i++){
//        scanf("%d", &rating_arr[i]);
//    }
//    int sum=0;
//    for(int i=0; i< num_of_user; i++){
//        sum += rating_arr[i];
//    }
//    double avarage = (double)(sum) / num_of_user;
//    printf("%lf \n", avarage);
//
//    int count[6]= {0};
//    for(int i=0; i< num_of_user; i++){
//        int x = rating_arr[i];
//        count[x]++;
//    }
//
//    for(int i=1; i<=5; i++){
//        printf("%d --> %d \n", i, count[i]);
//    }
//
//     char s[10] = "ava";
//     int len =  strlen(s);
//     printf("%d", len);

//     char a[100] = "ab";
//     char b[100] = "cd";
//     strcat(a, b);
//     printf("%s", b);




//    int n;
//    printf("how many student ");
//    scanf("%d", &n);
//    int marks[n];
//    for(int i=0; i<n; i++){
//        printf("input %d roll's mark ", i+1);
//        scanf("%d", &marks[i]);
//    }
//
//    for(int i=0; i<n; i++){
//        printf("%d marks of %d student\n", marks[i], i+1);
//    }


    int n;
    scanf("%d", &n);
    long long fibonnaci[n];

    fibonnaci[0]= 0;
    fibonnaci[1]= 1;

    for(int i = 2; i<n; i++){
        fibonnaci[i]= fibonnaci[i-2] + fibonnaci[i-1];
    }

    for(int i=0; i<n; i++){
            printf("%lld\t", fibonnaci[i]);
    }

return 0;
}
