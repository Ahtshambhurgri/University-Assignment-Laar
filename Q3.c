#include <stdio.h>
int main(){
    float basicpay;
    char a = '%';
    printf("Please Enter Basic pay:");
    scanf("%f", &basicpay);
    printf("\n---------Pay Slip------\n");
    printf("Basic pay                :%f\n", basicpay);
    float houserent;
    houserent = 0.4 * basicpay;
    printf("House Rent(4%c)          :%f\n", a, houserent);
    float medicalallounce;
    medicalallounce = 0.18 * basicpay;
    printf("Medical allounce(18%c)   :%f\n", a,medicalallounce);
    float computerallounce;
    computerallounce = 0.15 * basicpay;
    printf("Computer alounce(15%c)   :%f\n", a,computerallounce);
 printf("--------------------------------------------------------\n");
    float totalpay = basicpay + computerallounce + houserent + medicalallounce;
    printf("Total pay                :%f", totalpay);




    return 0;
}