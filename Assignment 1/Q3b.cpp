#include<stdio.h>

int main(){
    double f,c;
    printf("Enter the temperature (in Celsius) : ");
    scanf("%lf",&c);
    f=(9*c)/5 + 32;
    printf("Temperature in Fahrenheit : %.1lf",f);
    return 0;
}