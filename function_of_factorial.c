#include<stdio.h>
int fact(int a);
int main(){
    int a;
int factorial=fact(a);
printf("the factorial is = %d",factorial);
return 0;
}
int fact(int a){
    int n;
printf("enter a number \n");
scanf("%d",&n);
int i=1;int fact=1;
while(i<=n){
fact = fact*i;
i++;
}
return(fact);
}