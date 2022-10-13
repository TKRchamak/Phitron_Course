#include<stdio.h>
#include<limits.h>
#include<math.h>
#include<ctype.h>

int main(){
    printf("%d", INT_MAX);
    printf("%d", INT_MIN);
    /** overflow int
        int :
            -2^31         to  2^31-1
            -2147483648       2147483648
            printf("%d", INT_MAX);
            printf("%d", INT_MIN);

        short int / short :
            -2^15 to 2^15
            short int a = 100000;
            printf("%d", SHRT_MAX)

        long int /long : unUsual

        long long int / long long :
            -2^63 to 2^63
            printf("%lld", LONG_MAX);

        unsigned int : 0 ti 2e9
    */


    /** overflow float
        float temp = 1e10;
        printf("%d", temp);

        double temp = 1e20;
        printf("%d", temp);
    */

    /** function
        double number = 100.5;
        pow(number, 3);
        sqrt(number);
        ceil(number);
        floar(number);
        printf("%d", (int)numer)
    */

    /** character
        (isupper(character))
    */
}
