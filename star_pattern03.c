#include<stdio.h>
void pattern();
int main(){
int i,j,l;
printf("How many lines do you want to print like this Pattern\n");
pattern();
printf("Enter the number of lines:-- \n");
scanf("%d",&l);
for(i=1;i<=l;i++){
    for(j=1;j<=(2*l)-1;j++){
        if(j>=(l+1)-i && j<=(l-1)+i){
            printf("*");
        }
        else{
            printf(" ");
        }
            }
printf("\n");
}
return 0;
}
void pattern(){
     int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}