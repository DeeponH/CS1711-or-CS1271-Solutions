#include<stdio.h>

int main(){
    float x,y;
    printf("Enter x : ");
    scanf("%f",&x);
    printf("Enter y : ");
    scanf("%f",&y);
    float k = 5*x*x*x+4*x*x*y*y+4*y*y*y+30;
    printf("Result : %.2f",k);
    return 0;
}