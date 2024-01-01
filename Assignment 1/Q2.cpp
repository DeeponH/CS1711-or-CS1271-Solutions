#include<stdio.h>
#define pi 3.14159 

int main(){
    double r,area,circumference;
    printf("Enter the radius : ");
    scanf("%lf",&r);
    circumference=2*pi*r;
    area=pi*r*r;
    printf("Area : %.2lf\n",area);
    printf("Circumference : %.2lf",circumference);
    return 0;
}