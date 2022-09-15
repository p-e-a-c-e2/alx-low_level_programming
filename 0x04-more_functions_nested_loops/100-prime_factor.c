#include <stdio.h>
/**
*main - prints the largest prime factor of the number 612852475143
*Return: 0 if true
*/
int main(void)
{
long int x = 612852475143;
long int y;
for (y = 2; y < x; y++)
{
if (x % y == 0)
{
x = x / y;
}
}
printf("%ld\n", y);
return (0);
}
