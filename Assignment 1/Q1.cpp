#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d",&c);
    int sum = a+b+c;
    printf("The sum is : %d",sum);
    return 0;
}