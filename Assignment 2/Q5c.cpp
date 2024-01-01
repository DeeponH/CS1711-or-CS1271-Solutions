#include <stdio.h>
#include<math.h>

int main(){
    int n,x,m=1,fact=1;
    float sum=0.0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("Enter the value of x : ");
    scanf("%d",&x);
    for (int i = 1; i <= n; i++){
        sum = sum + (pow(x, i) / i);
    }
    printf("The sum is : %.2f",(1+sum));
    return 0;
}