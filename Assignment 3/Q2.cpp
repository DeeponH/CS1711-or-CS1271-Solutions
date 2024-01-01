#include <stdio.h>

int main(){
    int n,t;
    printf("Enter the target element : ");
    scanf("%d",&t);
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter Element No %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            printf("The target element is at index number %d",i);
        }
    }
    return 0;
}