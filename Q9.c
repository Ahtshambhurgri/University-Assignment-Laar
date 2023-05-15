#include<stdio.h>
int main(){
    int days, years, weeks, remaindays;
    printf("Enter Days:");
    scanf("%d", &days);
    years = days / 365;
    weeks = (days % 365) / 7;
    remaindays = (days % 365) % 7;
    printf("Years      Months     Days");
    printf("\n%d          %d          %d", years, weeks, remaindays); 

    return 0;
}