// write a function to cheak whether a given number is even or odd . function will return 1 if number is even and return o if number is odd (TsRs)
#include <stdio.h>
int oddeven(int a);
int main()
{
    int a;
    printf("enter a number \n");
    scanf("%d", &a);
    int cheak = oddeven(a);
    printf("your entred value is = %d", cheak);
    return 0;
}
int oddeven(int a)
{
    if (a % 2 == 0)   //you can also write return a%2==0;

        return (1);

   else             //you can also remove else 
        return (0);
}