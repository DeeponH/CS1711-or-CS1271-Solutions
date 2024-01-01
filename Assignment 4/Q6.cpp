#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,c=0;
    printf("Enter the size of the string : ");
    scanf("%d",&n);
    char str[n];
    printf("Enter The String : ");
    scanf (" %[^\n]%*c", str);
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            c++;
        }
    }
    printf("Number of words : %d",c+1);
    return 0;
}