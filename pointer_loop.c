#include<stdio.h>
int main(){
int i,*p,a[5];
p=&a[0];
for(i=0;i<=4;i++){
    scanf("%d",(p+i));
}
printf("your input is \n ");
for(i=0;i<=4;i++){
    printf("%d \n",*(p+i));
}
return 0;
}
