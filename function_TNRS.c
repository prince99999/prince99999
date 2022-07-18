#include<stdio.h>
int sum();
int main(){
int add;
add=sum();
printf("the addition of no = %d",add);
return 0;
}
int sum(){
    int a,b,c;
    printf("enter any to number \n");
    scanf("%d%d",&a,&b);
    c=a+b;
    return (c);
}