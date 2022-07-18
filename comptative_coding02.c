//print a pattern of numbers from 1 to n as shown below each oof the numbers is seprated by a single space.

#include<stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n); 
    for(i=1;i<=2*n-1;i++){
        k=n;
        for(j=1;j<=2*n-1;j++){
            printf("%d ",k);

        }
        printf("\n");
    }
return 0;
}