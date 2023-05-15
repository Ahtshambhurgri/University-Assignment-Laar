#include <stdio.h>
int main(){
    int number1,number2;
    printf("Enter 1st Number:");
    scanf("%d", &number1);
    printf("Enter The 2nd Number:");
    scanf("%d", &number2);
    printf("\n------------------------------------");
    int sum = number1 + number2;
    printf("\nThe Sum of %d and %d is          :%d", number1,number2,sum);
    int product = number1 * number2;
    printf("\nThe Product of %d and %d is      :%d", number1,number2,product);
    return 0;
}