#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Please enter a five-digit number: ");
    scanf("%d", &number);

    printf("Separated from one another by three spaces: ");

    // Separating and printing the digits
    digit = number / 10000;  // Extracting the first digit
    printf("%d   ", digit);
    sum += digit;

    digit = (number / 1000) % 10;  // Extracting the second digit
    printf("%d   ", digit);
    sum += digit;

    digit = (number / 100) % 10;  // Extracting the third digit
    printf("%d   ", digit);
    sum += digit;

    digit = (number / 10) % 10;  // Extracting the fourth digit
    printf("%d   ", digit);
    sum += digit;

    digit = number % 10;  // Extracting the fifth digit
    printf("%d\n", digit);
    sum += digit;

    printf("Sum of five digits: %d\n", sum);

    return 0;
}
