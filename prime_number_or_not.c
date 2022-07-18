// write a program to cheak whether a given number is prime or not
#include <stdio.h>
#include<math.h>
int main()
{
    int i, n;
    printf("enter A number \n");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)

            break;
    }
    if (n == i)

        printf("it is a prime number ");

    else
        printf("it is not prime number \n");

    // Improve in logic

    int m;
    printf("enter A number \n");
    scanf("%d", &m);
    for (i = 2; i < m / 2; i++)
    {
        if (n % i == 0)

            break;
    }
    if (m / 2 + 1 == i)

        printf("it is a prime number ");

    else
        printf("it is not prime number \n");

    // or afficiance

    int x, y, z;
    printf("enter a value \n");
    scanf("%d", &x);
    z = sqrt(x);
    for (y = 2; y <= z; i++)
        if (x % y == 0)
            break;
    if (i == z + 1)
        printf("it is prime ");
    else
        printf("it is not prime ");

    return 0;
}
