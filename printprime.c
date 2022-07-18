#include<stdio.h>
void prime(int a , int b);
int isprime(int n);
int main(){
int a ,b;
printf("Enter the value of a and b \n");
scanf("%d%d",&a,&b);
prime(a,b);
return 0;
}
void prime(int a ,int b){
int x;
for (x= a; x <= b; x++)
{
if(isprime(x))
printf("%d",x);
}

}

int isprime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0)
        return 0;
        return 1;
    }
}