#include "main.h"
/**
 *print_numbers - prints number 0-9 followed by newline
 */
void print_numbers(void)
{
int x;
for (x = 0; x <= 9; x++)
{
_putchar('0' + x);
}
_putchar('\n');
}
