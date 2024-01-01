#include <stdio.h>

int main(){
    int n,sum=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter Element No %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            sum+=arr[i];
        }
    }
    printf("The sum is %d",sum);
    return 0;
}