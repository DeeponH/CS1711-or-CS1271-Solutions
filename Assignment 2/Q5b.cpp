#include <stdio.h>

int main(){
    int n,x,sum=0,m=1;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("Enter the value of x : ");
    scanf("%d",&x);
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            m=m*x;
        }
        sum+=m;
        m=1;
    }
    printf("The sum is : %d",(1+sum));
    return 0;
}