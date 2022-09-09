#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints upper and lower case letters
 *
 *Return: 0 if true
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar (ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar (ch);
putchar ('\n');
return (0);
}
