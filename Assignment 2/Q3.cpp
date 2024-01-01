#include <stdio.h>

int main(){
    int x,y,k=1;
    printf("Enter the base : ");
    scanf("%d",&x);
    printf("Enter the power : ");
    scanf("%d",&y);
    for(int i=0;i<y;i++){
        k=k*x;
    }
    printf("The result : %d",k);
}