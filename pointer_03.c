#include<stdio.h>
int main(){
    int sum;
    int i;
    int a[5];
    printf("Enter five numbers \n");
    for(i=0;i<=4;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
   
    printf("addtion of these number is = %d ", sum);
    
return 0;
}