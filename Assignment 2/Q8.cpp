#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n<=1){
        printf("Out of Bounds");
    }
    for(int i=0;i<sqrt(n);i++){
        if(n%2!=0){
            printf("Not power of two");
            exit(0);
        }
        n=n/2;
    }
    printf("Power of two");
    return 0;
}