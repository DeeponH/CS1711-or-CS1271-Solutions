#include <stdio.h>

int main(){
    int n,m=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=2;j>=(i+1);j--){
            printf("  ");
        }
        for(int k=0;k<(2*i+1);k++){
            printf ("%d ",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}

