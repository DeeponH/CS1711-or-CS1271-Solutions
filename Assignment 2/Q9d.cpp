#include <stdio.h>

int main(){
    int n,m=65;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)  
    {
        for(int j=n;j>i;j--){
            printf("  ");
        }
        for(int k=0;k<i;k++){
            printf("%c ",char(m));
            m++;
        }
        printf("\n");
    }
    return 0;
}