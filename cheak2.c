#include<stdio.h>
int main(){
int n;
printf("enter a number \n");
scanf("%d",&n);
if(n%(n/2)==0){
    printf("Not prime");

}
else{
    printf("Prime");
}




return 0;
}
