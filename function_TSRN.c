 #include<stdio.h>
 void sum(int , int );
 int main(){
    int a,b;
 printf("Enter any two number \n");

 scanf("%d%d",&a,&b);

 sum(a,b);

 return 0;

}

void sum(int a,int b){

    int c=a+b;

    printf("the sum  is = %d",c);

}