#include<stdio.h>
int main(){
    int hours,secondes,minutes,remainsecondes;
    printf("Input Secondes?");
    scanf("%d", &secondes);
    hours = secondes / 3600;
    minutes = (secondes % 3600) / 60;
    remainsecondes = (secondes % 3600) % 60;
    printf("Hours      minutes      secondes");
    printf("\n%d           %d              %d", hours, minutes, remainsecondes);

    return 0;
}