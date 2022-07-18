#include<stdio.h>
int main(){
int i,j,l;
int k=1;
printf("Enter lines number\n ");
scanf("%d",&l);
for(i=1;i<=l;i++){
    for(j=1;j<=(2*l)-1;j++){
        if(j>=(l+1)-i && j<=(l-1)+i){
            printf("%3d",k);
            if(j<l){
                k++;
            }
            else{
                k--;
            }
      
        }
          else{
            printf("  ");
        }
    }
printf("\n");
}




return 0;
}  