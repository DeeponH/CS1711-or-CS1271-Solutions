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
        sum+=arr[i];
    }
    float avg = sum/n;
    printf("The average is %.2f",avg);
    return 0;
}