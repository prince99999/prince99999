#include<stdio.h>
int main(){
    char name[10]="prince";
    int i=0;
    while (name[i]!='\0')
    {
        printf("%c",name[i]);
        i++;
    }
    
    printf("\n%s \n",name);//second method to print string

    puts(name);
    

return 0;
}