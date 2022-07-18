#include<stdio.h>
float redius(float r );
int main(){
    float r;
    float area;
printf("Enter the redius of circle \n");
scanf("%f",r);
area=redius(r);
printf("the area of the circle is %f",area);
return 0;
}
float redius(float r){
    
    return (3.14*r*r);
}