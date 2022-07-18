#include <stdio.h>
int  addnum();
int sub();
int multi();
int division();
int main()
{
    int choice;
    printf("what you want to do \n");
    printf("1-Addition \n 2-Substraction \n 3-Multiplication \n 4-Division \n");
      printf("Enter your choice \n");
scanf("%d",&choice);\
switch(choice){

    case 1 :int add=addnum();
    printf("the addition of these number = %d",add);

    break;
    case 2 : sub();
    break;
    case 3 : multi();
    break;
    case 4 : division();
    break;
    default : 
        printf("wrong input \n");
    

}

    return 0;
}
int addnum()
{
    int n;

    printf("How many number you want to add  \n ");
    printf("1.2NUMBER \n 2.3NUMBER \n ");
    scanf("%d", &n);
    if (n == 1)
    {
        int a, b ,add;
        printf("you are selected for add two number \n ");
        printf("enter any Two Number \n");
        scanf("%d%d", a, b);
        add = a + b;
       
    } 
    else{
        if(n==2){
            int q,w,r;
            printf("enter any three number \n");
            scanf("%d",&q,w,r);
            int e=q+w+r;
            printf("the addition of three number is = %d",e);
        }
    else{
        printf("wrong input");
        
    }

        }
    }
    int sub(){
        int g,h;
        printf("enter any two number \n");
        scanf("%d",&g,h);
    int i=g-h;
    printf("the substraction of these number = %d",i);
    }
    int multi(){
        int g,h;
        printf("enter any two number \n");
        scanf("%d%d",&g,&h);
        int i=g*h;
        printf("the multiplication of these number = %d",i);
    }
int division(){
    int m,x,o;
    printf("enter any two number for division \n");
    scanf("%d%d",&x,&m);
    o = x / m;
    printf("the  division of these number = %d ",o);

}