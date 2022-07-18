#include<stdio.h>
#include<string.h>
int main(){
char n[]={'p','r','i','n','c','e','\0'};
int i;
int length=strlen(n);

for(i=0;n[i]!='\0';i++){
    printf("%c ",n[i]);
}
printf(" \n the length of string is = %d",length );
return 0;
}