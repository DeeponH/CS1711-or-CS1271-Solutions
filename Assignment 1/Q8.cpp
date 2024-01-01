#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    printf("Enter the first coefficient : ");
    scanf("%f",&a);
    printf("Enter the second coefficient : ");
    scanf("%f",&b);
    printf("Enter the third coefficient : ");
    scanf("%f",&c);
    float r1,r2,d,rp,ip;
    d=b*b-4*a*c;
    if (d>=0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("The two roots are : %.2f and %.2f",r1,r2);
    }
    else{
        rp = -b / (2 * a);
        ip = sqrt(-d) / (2 * a);
        printf("The two roots are %.2lf+%.2lfi and %.2f-%.2fi", rp, ip, rp, ip);
    }
    return 0;
}