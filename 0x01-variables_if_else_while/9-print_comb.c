#include <stdio.h>
/**
 *main - prints all possible combinations of single digit
 *
 *Return: 0 if true
 */
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
if (i == '9')
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
