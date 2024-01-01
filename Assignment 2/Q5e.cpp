#include <stdio.h>

int main(){
    int n,sum=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=2*i;
    }
    printf("The sum is : %d",sum);
    return 0;
}