#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the size of the string : ");
    scanf("%d",&n);
    char str[n];
    printf("Enter The String : ");
    scanf("%s",str);
    for(int i=0;i<n;i++){
        if(str[i]>=97 && str[i]<=122){
            str[i]=char(int(str[i]-32));
        }
    }
    printf("Capitalized String : %s",str);
    return 0;
}