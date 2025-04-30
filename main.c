#include"stdio.h"
#include"kartik.h"
int main(){
    int n ;
    printf("Enter  number to find factorial :-");
    scanf("%d",&n);
    printf("%d\n",factorial(n));

    printf("Enter a year to check leap year:- ");
    int year ;
    scanf("%d",&year);
    leapyear(year);

    printf("Enter a number to check palindrom or not:-");
    int num;
    scanf("%d",&num);
    palindrom(num);
}
