#include <stdio.h>

int main() {
    int number, reverse = 0;

    printf("Enter any number: ");
    scanf("%d", &number);

    while (number != 0) {
        int remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }

    printf("Reverse of %d is: %d\n", number, reverse);

    return 0;
}
