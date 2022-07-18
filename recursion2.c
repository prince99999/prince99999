#include<stdio.h>
void printR(int n);
int main(){
    int n;
printf("Enter A number \n");
scanf("%d",&n);
printR(n);
getch();
return 0;
}
void printR(int n){
    if(n>0){

        printf("%d",n);
             printR(n-1);
    }

}
