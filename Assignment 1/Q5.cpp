#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("Enter the third number : ");
    scanf("%d",&c);

    if(a>b){
        if(a>c){
            printf("Largest : %d",a);
        }
        else{
            printf("Largest : %d",c);
        }
    }
    else{
        if(b>c){
            printf("Largest : %d",b);
        }
        else{
            printf("Largest : %d",c);
        }
    }
    return 0;
}