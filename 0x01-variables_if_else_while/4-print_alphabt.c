#include <stdio.h>
#include <stdlib.h>
/**
 *main - print all letters except q and e
 *
 *Return: 0 if true
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch == 'q')
{
continue;
}
putchar(ch);
}
putchar ('\n');
return (0);
}
