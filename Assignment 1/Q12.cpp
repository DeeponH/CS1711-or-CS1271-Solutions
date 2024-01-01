#include <stdio.h>
#include <stdlib.h>

int main(){
    char a;
    printf("Enter the character : ");
    scanf("%c",&a);
    int k=int(a);
    if (k>=65 && k<=91){
        a=char(k+32);
    }
    else if(k>=97 && k<=122){
        a=char(k-32);
    }
    else{
        printf("Not an alphabet");
        exit(0);
    }
    printf("New character : %c",a);
    return 0;
}
