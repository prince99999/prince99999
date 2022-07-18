// write a program to cheak whether a given number id prime or not
#include<stdio.h>
int oddeven(int n);
int main(){
    int n;
    printf("enter a  number \n");
    scanf("%d",&n);
int ans=oddeven(n);
printf("%d",ans);
return 0;
}
int oddeven(int n){
    
   if(n%2==0){
       return (0);
   }
   else{
       return (1);
   }
}