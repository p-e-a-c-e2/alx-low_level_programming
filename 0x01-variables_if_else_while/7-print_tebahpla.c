#include <stdio.h>
/**
 *main - print alphabet in reverse on lowercase
 *
 *Return: 0 if true
 */
int main(void)
{
int ch;
for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar('\n');
return (0);
}
