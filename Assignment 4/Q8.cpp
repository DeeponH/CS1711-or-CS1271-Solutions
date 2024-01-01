#include <stdio.h>
#include <stdlib.h>

int main(){
    int r1,r2,c1,c2;
    printf("Number of Rows of Matrix 1 : ");
    scanf("%d",&r1);
    printf("Number of Columns of Matrix 1 : ");
    scanf("%d",&c1);
    printf("Number of Rows of Matrix 2 : ");
    scanf("%d",&r2);
    printf("Number of Columns of Matrix 2 : ");
    scanf("%d",&c2);
    if(r1!=r2 || c1!=c2){
        printf("Can't be added");
        exit(0);
    }
    int arr1[r1][c1],arr2[r2][c2],result[r1][c1];
    printf("Values for First Matrix : \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            int k;
            printf("Enter Element at (%d,%d) : ",i,j);
            scanf("%d",&k);
            arr1[i][j]=k;
        }
    }
    printf("Values for Second Matrix : \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            int k;
            printf("Enter Element at (%d,%d) : ",i,j);
            scanf("%d",&k);
            arr2[i][j]=k;
        }
    }
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            result[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("Result Matrix : \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}