
#include <stdio.h>
#include "kartik.h"

int main() {
    int (*ptr_leapyear)(int);
    int (*ptr_factorial)(int);
    int (*ptr_prime)(int);

    
    ptr_leapyear = leapyear;
    ptr_factorial = factorial;
    ptr_prime = prime;

    int year, n, a;

    printf("Enter year to check leap year: ");
    scanf("%d", &year);
    if (ptr_leapyear(year) == 1) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    printf("Enter number to find factorial: ");
    scanf("%d", &n);
    printf("Factorial: %d\n", ptr_factorial(n));

    printf("Enter number to check prime: ");
    scanf("%d", &a);
    if (ptr_prime(a) == 1) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
