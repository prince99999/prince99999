#include<stdio.h>
void sum_digits(int n);
int main(){
    int n;
printf("Enter a number \n");
scanf("%d",&n);
sum_digits(n);
    return 0;
}
void sum_digits(int n){
    int sum,reminder;
    if(n!=0){
 reminder = n/10;
   
   sum = reminder + sum_digits(n/10);


}

}