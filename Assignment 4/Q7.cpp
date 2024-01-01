#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1,n2;
    printf("Enter the size of first string : ");
    scanf("%d",&n1);
    printf("Enter the size of second string : ");
    scanf("%d",&n2);
    char str1[n1],str2[n2],con[n1+n2];
    printf("Enter First String : ");
    scanf("%s",str1);
    printf("Enter Second String : ");
    scanf("%s",str2);
    for(int i=0;i<n1;i++){
        con[i]=str1[i];
    }
    for(int i=0;i<n2;i++){
        con[n1+i]=str2[i];
    }
    printf("Concatenated String : %s",con);
    return 0;
}