#include<stdio.h>

int main(){
    float x;
    printf("Enter x : ");
    scanf("%f",&x);
    float k = 4*x*x+2*x+10;
    printf("Result : %.2f",k);
    return 0;
}