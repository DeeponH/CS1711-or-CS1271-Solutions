#include<stdio.h>

int main(){
    double f,c;
    printf("Enter the temperature (in Fahrenheit) : ");
    scanf("%lf",&f);
    c=(5*(f-32))/9;
    printf("Temperature in Celsius : %.1lf",c);
    return 0;
}