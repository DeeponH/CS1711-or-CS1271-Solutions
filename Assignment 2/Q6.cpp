#include <stdio.h>

int main(){
    int f0=0,f1=1,n,fn;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i<=1){
            fn=i;
        }
        else{
            fn=f0+f1;
            f0=f1;
            f0=fn;
        }
        printf("%d  ",fn);
    }
    return 0;
}