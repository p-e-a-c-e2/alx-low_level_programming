#include <stdio.h>
/**
*main - fizzbuzz interview selector
*Return: 0 if true
*/
int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (x % 3 == 0 && x % 5 != 0)
{
printf("Fizz");
}
else if (x % 5 == 0 && x % 3 != 0)
{
printf("Buzz");
}
else if (x % 15 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", x);
}
if (x == 100)
{
break;
}
else
printf(" ");
}
printf("\n");
return (0);
}
