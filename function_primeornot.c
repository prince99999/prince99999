#include<stdio.h>
int isprime(int n);
int main(){
    int n;
printf("Enter a number \n");  
scanf("%d",&n);
int ans=isprime(n);
printf("%d",ans);
return 0;
}
int isprime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%2==0)
        return (0);
    
    }
    return (1);
}