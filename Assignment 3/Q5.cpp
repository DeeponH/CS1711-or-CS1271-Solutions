#include <stdio.h>

int main(){
    int n,n1,c=0,i=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    n1=n;
    while(n1!=0){
        c++;
        n1/=10;
    }
    int arr[c];
    while(n!=0){
        arr[i]=n%2;
        n/=2;
        i++;
    }
    printf("Binary Form : ");
    for(int k=i-1;k>=0;k--){
        printf("%d",arr[k]);
    }
    return 0;
}