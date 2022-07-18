#include<stdio.h>
void  swap(int a,int b);
int main(){
    int a,b;
printf("enter the value of a and b \n");
scanf("%d%d",&a,&b);

 printf("Before Exucution **** \nvalue of a = %d and Value of b = %d",a,b);
swap(a,b);
return 0;
}
void swap(int a,int b){
    int c;
    
    c=a;
    a=b;
    b=c;
    printf("\n*****After Exucution ****\n Value of a = %d and Value of b = %d",a,b);

}