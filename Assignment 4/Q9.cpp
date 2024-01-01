#include <stdio.h>
#include <stdlib.h>

int main(){
    int row,col;
    printf("Number of Rows of Matrix : ");
    scanf("%d",&row);
    printf("Number of Columns of Matrix : ");
    scanf("%d",&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int k;
            printf("Enter Element at (%d,%d) : ",i,j);
            scanf("%d",&k);
            arr[i][j]=k;
        }
    }
    //Symmetric Check
    int trans[col][row];
    int c=0;
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            trans[j][i]=arr[i][j];
        }
    }
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if (trans[i][j]!=arr[i][j]){
                c++;
            }
        }
    }
    if (c==0){
        printf("Symmetric");
    }
    else{
        printf("Not Symmetric");
    }
    printf("\n");
    //Lower Triangular
    int d=0;
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i<j){
                if (arr[i][j]!=0){
                    d++;
                }
            }
        }
    }
    if (d==0){
        printf("Lower Triangular");
    }
    else{
        printf("Not Lower Triangular");
    }
    printf("\n");
    //Diagonal Test
    int e=0;
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i!=j){
                if(arr[i][j]!=0){
                    e++;
                }
            }
        }
    }
    if(e==0){
        printf("Diagonal Matrix");
    }
    else{
        printf("Not Diagonal Matrix");
    }
    printf("\n");
    //Sum of Diagonals
    int sum1=0;
    int sum2=0;
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                sum1+=arr[i][j];
                sum2+=trans[i][j];
            }
        }
    }
    printf("Sum of Diagonals is %d",(sum1+sum2));
    return 0;
}