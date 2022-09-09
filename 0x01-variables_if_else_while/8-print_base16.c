#include <stdio.h>
/**
 *main - prints Hexadecimal numbers of base 16
 *
 *Return: 0 if true
 */
int main(void)
{
int i;
int ch;
for (i = '0'; i <= '9'; i++)
putchar(i);
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar ('\n');
return (0);
}
