#include<stdio.h>
int fact(int n);
int main(){
    int n,f;
    printf("Enter a number \n");
    scanf("%d",&n);
    f=fact(n);
    printf("the factorial of %d is = %d",n,f);
return 0;
}
int fact(int n){
    int i,fact;
    for(i=1;i<=n;i++){
        fact=fact*i;   
    }
return (fact);
}
