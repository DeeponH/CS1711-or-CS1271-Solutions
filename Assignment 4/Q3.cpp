#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,a=0,e=0,i=0,u=0,o=0;
    printf("Enter the size of the string : ");
    scanf("%d",&n);
    char str[n];
    printf("Enter The String : ");
    scanf("%s",str);
    for(int i=0;i<n;i++){
        if(str[i]=='a'||str[i]=='A') a++;
        if(str[i]=='e'||str[i]=='E') e++;
        if(str[i]=='i'||str[i]=='I') i++;
        if(str[i]=='o'||str[i]=='O') o++;
        if(str[i]=='u'||str[i]=='U') u++;
    }
    printf("Number of A : %d\n",a);
    printf("Number of E : %d\n",e);
    printf("Number of I : %d\n",i);
    printf("Number of O : %d\n",o);
    printf("Number of U : %d\n",u);
    return 0;
}