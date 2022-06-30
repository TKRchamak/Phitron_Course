#include<stdio.h>
#include<string.h>
// strlen,strncpy, strncat, strcmp

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
//    char str[]={};
//    fgets(str, 10, stdin);
//    int number_of_ch = strlen(str);
//    char str2[10] ={};
//    strncpy(str2, str, 9);
//    str2[10] = '\0';
//    printf("%s \n", str2);


    char sentance1[100] = "I am Tonmoy Kumar.";
    char sentance2[30] = "I am not a good person.dv";
    strncat(sentance1, sentance2, strlen(sentance2));
    sentance1[100] = '\0';
    printf("%s", sentance1);

return 0;
}
