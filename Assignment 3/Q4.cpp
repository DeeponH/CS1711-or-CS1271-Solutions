#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int barr[n];
    for(int i=0;i<n;i++){
        printf("Enter Element No %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        barr[i]=arr[i];
    }
    printf("New Array : ");
     for(int i=0;i<n;i++){
        printf("%d ",barr[i]);
    }
}