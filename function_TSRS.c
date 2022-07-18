#include<stdio.h>
int sum(int , int );
int main(){
int a,b,add;
printf("Enter any two number \n");
scanf("%d%d",&a,&b);
add=sum(a,b);
printf("the addition is = %d",add);
return 0;
}
int sum(int a ,int b){
    int c=a+b;
    return (c);
}