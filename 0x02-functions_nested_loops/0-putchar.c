#include "main.h"
/**
 *main - A program that prints _putchar
 *
 *Return: 0 if true
 */
int main(void)
{
char *i = "_putchar";
while (*i)
{
_putchar(*i);
i++;
}
_putchar('\n');
return (0);
}
