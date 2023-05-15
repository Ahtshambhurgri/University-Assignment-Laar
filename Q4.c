#include<stdio.h>
int main(){
    int a;
    int squar;
    int cube;
    printf("Please Enter any one integer?");
    scanf("%d", &a);
    squar = a * a;
    cube = a * a * a;
    printf("Square of %d is :%d\n", a, squar);
    printf("Cube of %d is   :%d", a , cube);


    return 0;
}