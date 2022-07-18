#include<stdio.h>
float circle(float  a);
int main(){
    float a;
float  area = circle(a);
printf("the area of circle is = %f ",area);
return 0;
}
float circle(float  a){
    float  r;
    printf("enter the  redius of circle \n");
    scanf("%f",&r);
    float  area= 3.14*(r*r);
    return (area);
}