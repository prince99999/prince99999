// Write a program to calculate x power y.(when user input x is 2 and y is 3 then the result will be
#include <stdio.h>
#include<conio.h>
int main()
{
   int x, y, i;
   printf("Enter x value \n");
   scanf("%d", &x);
   printf("Enter y value \n ");
   scanf("%d", &y);
   int z = x;
   for (i = 1; i < y; i++)
   {
      z = z * x;
   }
   printf("answer  = %d", z);

   return 0;
   getch();
}
