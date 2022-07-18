#include<stdio.h>
int combi(int n ,int r);
int fact(int n);
int main(){
int n,r;
printf("enter the vlaue of n and r");
scanf("%d%d",&n,&r);

printf("the combination of is = %d",combi(n,r));
return 0;
}
int combi(int n ,int r){
    int combination;
    combination=fact(n)/fact(n-r)/fact(r);
  return (combination);
}
int fact(int n){
    int i,fact;
    for(i=1;i<=n;i++){
        fact=fact*i;
 }
return (fact);
}