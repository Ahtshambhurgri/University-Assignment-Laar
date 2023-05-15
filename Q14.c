#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &number);

    int digit;
    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
