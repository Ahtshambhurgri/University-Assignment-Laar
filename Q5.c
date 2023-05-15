#include<stdio.h>
int main(){
    int amount, leftamount;
    printf("Enter Any Amount?");
    scanf("%d", &amount);
    printf("500   100      50       20      10      5       2       1 \n");
    leftamount = amount;
    printf("%d\t", leftamount / 500);
    leftamount %= 500;
    printf("%d\t", leftamount / 100);
    leftamount %= 100;
    printf("%d\t", leftamount / 50);
    leftamount %= 50;
    printf("%d\t", leftamount / 20);
    leftamount %= 20;
    printf("%d\t", leftamount / 10);
    leftamount %= 10;
    printf("%d\t", leftamount / 5);
    leftamount %= 5;
    printf("%d\t", leftamount / 2);
    leftamount %= 2;
    printf("%d\t", leftamount / 1);
    leftamount %= 1;


    return 0;
}