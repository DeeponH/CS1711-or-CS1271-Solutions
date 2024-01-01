#include <stdio.h>

int main(){
    int x,y,gcd,min;
    printf("Enter the base : ");
    scanf("%d",&x);
    printf("Enter the power : ");
    scanf("%d",&y);
    if(x<y){
        min=x;
    }
    else{
        min=y;
    }
    for(int i=1;i<=min;i++){
        if(x%i==0 && y%i==0){
            gcd=i;
        }
    }
    printf("GCD : %d",gcd);
    return 0;
}