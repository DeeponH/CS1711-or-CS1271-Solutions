#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the size of the string : ");
    scanf("%d",&n);
    char str[n],pal[n];
    printf("Enter The String : ");
    scanf("%s",str);
    for(int i=0;i<n;i++){
        pal[n-i-1]=str[i];
    }
    for(int i=0;i<=n;i++){
        if(pal[i]!=str[i]){
            printf("Not Palindrome");
            exit(0);
        }
    }
    printf("Palindrome");
    return 0;
}