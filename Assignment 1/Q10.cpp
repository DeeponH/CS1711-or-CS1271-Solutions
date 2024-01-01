#include <stdio.h>

int main(){
    char a;
    printf("Enter the character : ");
    scanf("%c",&a);
    char next= char(int(a)+1);
    printf("THe next character is %c",next);
}